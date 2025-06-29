# row = 1
# row<=5
# print row to 1
# row = row+1

# 1 
# 2 1 
# 3 2 1 
# 4 3 2 1 
# 5 4 3 2 1 

for i in range(1, 6):
    for j in range(i, 0, -1):
        print(j, end=" ")
    print()
print()

# row = a
# row<=e
# print row , row times 
# row = row+1
# a 
# b b
# c c c
# d d d d
# e e e e e
for i in range(5):
    for j in range(i+1):
        print(chr(97+i), end=" ")
    print()
print()


# row = 1
# row<=5
# print name, row times
# row = row+1

# a
# a b
# a b c
# a b c d
# a b c d e

for i in range(5):
    for j in range(i+1):
        print(chr(97+j), end=" ")
    print()
print()