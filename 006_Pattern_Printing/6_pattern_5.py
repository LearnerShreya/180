# column
# a b c d
# a b c d
# a b c d
# a b c d

# ✅ 1. Using ASCII values directly
for i in range(4):
    for j in range(4):
        print(chr(97 + j), end=' ')
    print()

print()

# ✅ 2. Using characters directly in a list
for i in range(4):
    for j in ['a', 'b', 'c', 'd']:
        print(j, end=' ')
    print()

print()

# ✅ 3. Using ord() and chr() to calculate each row character
for i in range(4):
    for j in range(4):
        ch = chr(ord('a') + j)
        print(ch, end=' ')
    print()

print()

# ✅ 4. Using list comprehension and join (Pythonic way)
for i in range(4):
    print(' '.join([chr(ord('a') + j) for j in range(4)]))