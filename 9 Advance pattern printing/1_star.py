
#         * 
#       * * *
#     * * * * *
#   * * * * * * *
# * * * * * * * * *
for i in range(5):
    for j in range(4-i):
        print(" ", end=" ")
    for j in range(2*i+1):
        print("*", end=" ")
    print()
print()

# Optimized version of the above pattern:
for i in range(5):
    spaces = "  " * (4-i)
    stars = "* " * (2*i+1)
    print(spaces + stars)
print()

# * * * * * * * * * 
#   * * * * * * * 
#     * * * * * 
#       * * * 
#         * 
for i in range(5):
    for j in range(i):
        print(" ", end=" ")
    for j in range(2*(4-i) + 1):
        print("*", end=" ")
    print()
print()

# * * * * * * * * * * 
# * * * *     * * * * 
# * * *         * * *
# * *             * *
# *                 *
# *                 *
# * *             * *
# * * *         * * *
# * * * *     * * * *
# * * * * * * * * * *
for i in range(5):
    for j in range(5, i, -1):
        print("* ", end="")
    for j in range(2*i):
        print("  ", end="")
    for j in range(5, i, -1):
        print("* ", end="")
    print()
for i in range(5):
    for j in range(i+1):
        print("*",end=" ")
    for j in range(2*(4-i)):
        print(" ",end=" ")
    for j in range(i+1):
        print("*",end=" ")
    print()
print()

# Optimized version of the above pattern:
# for i in range(5):
#     star = "* " * (5-i)
#     space = "  " * (2*i)
#     print(star, space, star)
# for i in range(5):
#     star = "* " * (i + 1)
#     space = "  " * (2 * (4-i))
#     print(star, space, star)
# print()

# print(a, b, c)	Adds a space between a, b, and c
# print(a + b + c)	Concatenates exactly as written

for i in range(5):
    star = "* " * (5-i)
    space = "  " * (2*i)
    print(star + space + star)
for i in range(5):
    star = "* " * (i + 1)
    space = "  " * (2 * (4-i))
    print(star + space + star)
print()



# *                 *
# * *             * * 
# * * *         * * *
# * * * *     * * * *
# * * * * * * * * * *
# * * * *     * * * *
# * * *         * * *
# * *             * *
# *                 *
for i in range(5):
    star = "* " * (i+1)
    space = "  " * (2 * (4 - i))
    print(star + space + star)
for i in range(4, 0, -1):
    star = "* " * (i)
    space = "  " * (2 * (5 - i))
    print(star + space + star)
print()

#         *
#       * * *
#     * * * * *
#   * * * * * * *
# * * * * * * * * * 
#   * * * * * * *
#     * * * * *
#       * * *
#         * 
for i in range(5):
    for j in range(4-i):
        print(" ", end=" ")
    for j in range(2*i+1):
        print("*", end=" ")
    print()
for i in range(5):
    for j in range(i):
        print(" ", end=" ")
    for j in range(2*(4-i) + 1):
        print("*", end=" ")
    print()