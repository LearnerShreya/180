# Number Pattern
# 1 2 3 4 5 
# 6 7 8 9 10 
# 11 12 13 14 15 
# 16 17 18 19 20 
# 21 22 23 24 25 

for i in range(0, 5):
    for j in range(1, 6):
        print(j + (5*i), end=' ')
    print()