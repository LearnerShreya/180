# row = 1
# row <= 5
# print space (5-row) times 
# print 'A' to 'A'+row-1, row times 
# row = row+1
#         A 
#       B B 
#     C C C
#   D D D D
# E E E E E

for i in range(5):
    for j in range(4-i):
        print("  ", end="")
    for j in range(i+1):
        print(chr(65 + i), end=" ")
    print()