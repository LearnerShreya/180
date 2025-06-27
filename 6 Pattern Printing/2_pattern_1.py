
# print row and column
# row
# 1 1 1 1
# 2 2 2 2
# 3 3 3 3
# 4 4 4 4

n = 5
for i in range(1, n):
    for j in range(1, n):
        print(i, end=" ")
    print()

print()


# column
# 1 2 3 4
# 1 2 3 4
# 1 2 3 4
# 1 2 3 4

n = 5
for i in range(1, n):
    for j in range(1, n):
        print(j, end=" ")
    print()