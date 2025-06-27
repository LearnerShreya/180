import subprocess
import os
from pathlib import Path

def run_git_command(command):
    return subprocess.run(command, capture_output=True, text=True)

# Get list of changed files (untracked + modified)
status_result = run_git_command(["git", "status", "--porcelain"])

lines = status_result.stdout.strip().split('\n')

# Filter out empty lines
lines = [line for line in lines if line.strip()]

# Parse and process each line
for line in lines:
    status_code = line[:2]
    file_path = line[3:].strip()

    # Format message
    if status_code == "??":
        msg = f"new file: {file_path}"
    elif status_code in [" M", "M "]:
        msg = f"modified: {file_path}"
    else:
        print(f"⚠️ Skipping unsupported status: {status_code} for {file_path}")
        continue

    try:
        print(f"📄 Processing: {file_path}")
        subprocess.run(["git", "add", file_path], check=True)
        subprocess.run(["git", "commit", "-m", msg], check=True)
        subprocess.run(["git", "push", "origin", "main"], check=True)
        print(f"✅ Pushed with message: {msg}\n")
    except subprocess.CalledProcessError as e:
        print(f"❌ Error processing {file_path}: {e}\n")
