# row = 1
# row <= 5
# print space 5-row times
# print * row times
# row = row+1

#         * 
#       * *
#     * * *
#   * * * *
# * * * * *  

for i in range(5):
    for j in range(4-i):
        print("  ", end="")
    for j in range(i+1):
        print("* ", end="")
    print()
print()


#     * 
#    * *
#   * * *
#  * * * *
# * * * * *

for i in range(5):
    for j in range(4-i):
        print(" ", end="")
    for j in range(i+1):
        print("* ", end="")
    print()