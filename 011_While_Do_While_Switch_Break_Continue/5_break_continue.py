# ==========================
# 🚀 Loop Control Keywords in Python
# break    – exit the loop immediately
# continue – skip the current iteration and move to next
# pass     – do nothing (placeholder)
# ==========================

n = int(input("Enter num: "))

# 1. Print only even numbers
i = 1
while i <= n:
    if i % 2 == 0:
        print(i)
    i += 1
print()

# 2. Print only odd numbers
i = 1
while i <= n:
    if i % 2 == 0:
        i += 1
        continue  # Skip even numbers
    print(i)
    i += 1
print()

# 3. Stop loop at first even number
i = 1
while i <= n:
    if i % 2 == 0:
        break  # Exit loop when first even number is found
    print(i)
    i += 1

# 4. Placeholder using pass
x = 10
if x > 0:
    pass  # 💤 To be implemented later
print("Done")