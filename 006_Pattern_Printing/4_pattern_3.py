# print column square
# column * column
# 1 4 9 16 25
# 1 4 9 16 25
# 1 4 9 16 25
# 1 4 9 16 25
# 1 4 9 16 25

n = 5
for i in range(1, n+1):
    for j in range (1, n+1):
        print(j*j, end=' ')
    print()