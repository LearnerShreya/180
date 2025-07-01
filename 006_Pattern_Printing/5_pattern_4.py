
# print alphaber
# row
# a a a a
# b b b b
# c c c c
# d d d d


# ✅ 1. Using ASCII values directly
for row in range(97, 101):  # 'a' to 'd'
    for col in range(4):
        print(chr(row), end=' ')
    print()

print()

# ✅ 2. Using characters directly in a list
for row in ['a', 'b', 'c', 'd']:
    for col in range(4):
        print(row, end=' ')
    print()

print()

# ✅ 3. Using ord() and chr() to calculate each row character
for i in range(4):
    ch = chr(ord('a') + i)
    for j in range(4):
        print(ch, end=' ')
    print()

print()

# ✅ 4. Using list comprehension and join (Pythonic way)
for i in range(4):
    print(' '.join([chr(ord('a') + i)] * 4))


# ord() is a built-in Python function that returns the Unicode/ASCII value (i.e., numeric code) of a character.
print(ord('0'))  # Output: 48
print(ord('A'))  # Output: 65
print(ord('Z'))  # Output: 90
print(ord('a'))  # Output: 97
print(ord('z'))  # Output: 122
