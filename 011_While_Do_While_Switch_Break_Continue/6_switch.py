# ===============================
# 🎯 Switch Case Alternatives in Python
# ===============================

# -----------------------------
# ✅ 1. Using if-elif-else
# -----------------------------
def if_else_switch(choice):
    print("\n🔹 Using if-elif-else:")
    if choice == 'a':
        print("You selected Option A")
    elif choice == 'b':
        print("You selected Option B")
    elif choice == 'c':
        print("You selected Option C")
    else:
        print("Invalid Option")


# -----------------------------
# ✅ 2. Using Dictionary as Switch
# -----------------------------
def case_a():
    return "You selected Option A"

def case_b():
    return "You selected Option B"

def case_c():
    return "You selected Option C"

def dict_switch(choice):
    print("\n🔹 Using dictionary switch:")
    switch_dict = {
        'a': case_a,
        'b': case_b,
        'c': case_c
    }
    result = switch_dict.get(choice, lambda: "Invalid Option")
    print(result())


# -----------------------------
# ✅ 3. Using match-case (Python 3.10+)
# -----------------------------
def match_case_switch(choice):
    print("\n🔹 Using match-case (Python 3.10+):")
    try:
        match choice:
            case 'a':
                print("You selected Option A")
            case 'b':
                print("You selected Option B")
            case 'c':
                print("You selected Option C")
            case _:
                print("Invalid Option")
    except SyntaxError:
        print("⚠️ match-case only works in Python 3.10+")


# -----------------------------
# 🔸 Input and Call All
# -----------------------------
choice = input("Enter your choice (a / b / c): ").lower()

if_else_switch(choice)
dict_switch(choice)

# Only call match-case if Python version is 3.10 or above
import sys
if sys.version_info >= (3, 10):
    match_case_switch(choice)
else:
    print("\n🔹 match-case skipped (requires Python 3.10+)")