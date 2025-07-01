# print row and column
# row
# 4 4 4 4
# 3 3 3 3
# 2 2 2 2
# 1 1 1 1

n = 4
for i in range(n, 0, -1):
    for j in range(n, 0, -1):
        print(i, end=" ")
    print()
print()

# column
# 4 3 2 1
# 4 3 2 1
# 4 3 2 1
# 4 3 2 1

n = 4
for i in range(n, 0, -1):
    for j in range(n, 0, -1):
        print(j, end=" ")
    print()