# * * * * * 
# * * * * * 
# * * * * * 
# * * * * * 
# * * * * * 

n = 5
for i in range(0, n):        # works, but i is unused
    for j in range(0, n):
        print("* ", end="")
    print()
print()

# Optimized version of the above pattern:
n = 5
row = "* " * n
for _ in range(n):
    print(row)
print()

# 2 2 2 2 2 
# 2 2 2 2 2 
# 2 2 2 2 2 
# 2 2 2 2 2 
# 2 2 2 2 2 

n = 5
for i in range(0, n):
    for j in range(0, n):
        print("2 ", end="")
    print()