# row = 1 
# row <= 5
# print * row times
# row = row + 1
# * 
# * *
# * * *
# * * * *
# * * * * *
for i in range(1, 6):
    for j in range(i):
        print("*", end=" ")
    print()
print()


# row = 1
# row<=5
# print row , row times 
# row = row+1
# 1 
# 2 2 
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5
for i in range(1, 6):
    for j in range(i):
        print(i, end=" ")
    print()
print()


# row = 1
# row<=5
# print 1 to row
# row = row+1
# 1 
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
for i in range(1, 6):
    for j in range(1, i+1):
        print(j, end=" ")
    print()
print()

# row = 1
# row < 5
# print column row + 1 times
# row = row + 1
# 1 2 
# 1 2 3 
# 1 2 3 4 
# 1 2 3 4 5
for i in range(1, 5):
    for j in range(1, i+2):
        print(j, end=" ")
    print()
print()