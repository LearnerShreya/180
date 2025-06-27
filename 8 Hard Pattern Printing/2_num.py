# row = 1
# row < 5
# print space 4-row times 
# print row row times 
# row = row+1
#       1 
#     2 2
#   3 3 3
# 4 4 4 4
for i in range(4):
    for j in range(4-i):
        print("  ", end="")
    for j in range(i+1):
        print(i+1, end=" ")
    print()
print()

# row = 1
# row < 5
# print space 4-row times 
# print 1 to row, row times 
# row = row+1 

#           1 
#         1 2
#       1 2 3
#     1 2 3 4
#   1 2 3 4 5 
# 1 2 3 4 5 6
for i in range(6):
    for j in range(5-i):
        print("  ", end="")
    for j in range(i+1):
        print(j+1, end=" ")
    print()

# row = 1
# row <= 5
# print space 5-row times 
# print row to 1, row times 
# row = row+1
#         1 
#       1 2
#     1 2 3
#   1 2 3 4
# 1 2 3 4 5