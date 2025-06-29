# row = 1
# row <=5
# print col 5 to row
# row = row +1
# 5 4 3 2 1 
# 5 4 3 2 
# 5 4 3 
# 5 4 
# 5 
for i in range(1, 6):
    for j in range(5, i - 1, -1):
        print(j, end=" ")
    print()
print()


# row = 1
# row <= 5
# print * 5 to 5-(row -1 ) times
# row = row + 1
# * * * * * 
# * * * * 
# * * * 
# * * 
# *
for i in range(1, 6):
    for j in range(5, i - 1, -1):
        print("*", end=" ")
    print()
print()


# 1 1 1 1 1 
# 2 2 2 2 
# 3 3 3 
# 4 4 
# 5 
for i in range(1, 6):
    for j in range(5, i - 1, -1):
        print(i, end=" ")
    print()
print()


# 6 6 6 6 6 6 
# 5 5 5 5 5
# 4 4 4 4
# 3 3 3
# 2 2
# 1
for i in range(6, 0, -1):
    for j in range(i):
        print(i, end=" ")
    print()
print()


# row = 1
# row <= 5
# print col (or (1  to)) (5 - (row-1) times )
# row = row+1
# 1 2 3 4 5 
# 1 2 3 4
# 1 2 3
# 1 2
# 1
for i in range(5, 0, -1):
    for j in range(1, i+1):
        print(j, end=" ")
    print()
print()


# row = 1
# row <=5
# print row 5 to 5-(row-1)
# row = row+1

# 5 
# 5 4
# 5 4 3
# 5 4 3 2
# 5 4 3 2 1
for i in range(1, 6):
    for j in range(i):
        print(5-j, end=" ")
    print()
print()