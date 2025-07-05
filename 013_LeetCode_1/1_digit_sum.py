# n = int(input("Enter Num: "))
# sum = 0
# while(n>0):
#     rem = n%10
#     n //= 10
#     sum += rem
# print(sum)

    



# n = int(input("Enter Num: "))
# print(0 if n==0 else 1+(n-1)%9)


# n = int(input("Enter Num: "))
# while(n>=10):
#     sum = 0
#     while(n>0):
#         sum += n%10
#         n //= 10
#     n = sum
# print(n)





# Method 1: Loop Method (Function)
def loop(n):
    while n >= 10:
        s = 0
        while n > 0:
            s += n % 10
            n //= 10
        n = s
    return n

n = int(input())
print(loop(n))

# Method 1: Loop Method (Direct)
n = int(input())
while n >= 10:
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    n = s
print(n)


# Method 2: Formula Method (Function)
def formula(n):
    return 0 if n == 0 else 1 + (n - 1) % 9

n = int(input())
print(formula(n))

# Method 2: Formula Method (Direct)
n = int(input())
print(0 if n == 0 else 1 + (n - 1) % 9)


# Method 3: Single Sum Once (Function)
def single(n):
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    return s

n = int(input())
print(single(n))

# Method 3: Single Sum Once (Direct)
n = int(input())
s = 0
while n > 0:
    s += n % 10
    n //= 10
print(s)




# ========================
# Code Summary:
#
# Method                     | Function Style              | No Function (Direct Code)
# -------------------------- | --------------------------- | -----------------------------
# Method 1 (Loop Method)     | loop(n)                     | Direct while loop
# Method 2 (Formula Method)  | formula(n)                  | Direct formula in print
# Method 3 (Single Sum Once) | single(n)                   | Direct single sum calculation
#
# ========================
# What Happens Here:
#
# First part: Function + return + print result after calling function.
# Second part: No function, just direct calculation and print.
# Covers all 3 methods clearly.
# ========================
