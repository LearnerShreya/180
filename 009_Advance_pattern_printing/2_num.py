
#         1
#       1 2 1
#     1 2 3 2 1
#   1 2 3 4 3 2 1
# 1 2 3 4 5 4 3 2 1

for i in range(1, 6):
    spaces = "  " * (5-i)
    no = " ".join(str(i) for i in range(1, i+1))
    num = " ".join(str(i) for i in range(i-1, 0, -1))
    print(spaces + no, num)