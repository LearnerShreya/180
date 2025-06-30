# 🔸 Printing List Elements with Index using range()
colors = ['red', 'green', 'blue']
for i in range(len(colors)):
    print(i, colors[i])

# 🔸 Printing List Elements with Index using enumerate()
for index, color in enumerate(colors):
    print(index, color)

# 🔸 Sum of Even Numbers from 2 to n using Generator Expression
n = 10
total = sum(i for i in range(2, n + 1, 2))
print("Sum of even numbers:", total)

# 🔸 Loop without Index using underscore (_) to repeat a statement
for _ in range(5):
    print("Practice makes progress!")

# 🔸 List Comprehension to Generate Squares from 1 to 5
squares = [i**2 for i in range(1, 6)]
print(squares)

# 🔸 Number Triangle Pattern using Nested Loop and join()
for i in range(1, 6):
    print(' '.join(str(j) for j in range(1, i + 1)))

# 🔸 Hourglass Star Pattern – Decreasing then Increasing
# Top half of hourglass
for i in range(5):
    star = '* ' * (5 - i)
    space = '  ' * (2 * i)
    print(star + space + star)

# Bottom half of hourglass
for i in range(5):
    star = '* ' * (i + 1)
    space = '  ' * (2 * (4 - i))
    print(star + space + star)

# 🔸 Difference between print(a, b, c) and print(a + b + c)
# print(a, b, c) → adds space between values
# print(a + b + c) → concatenates as-is without extra space