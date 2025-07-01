# ✅ Program to find factors in 3 formats

# Input once
n = int(input("Enter a number to find its factors: "))

# 1. Line-by-line
print("\n🔹 1. Factors printed line by line")
i = 1
while i <= n:
    if n % i == 0:
        print(f"{i} is a factor of {n}")
    i += 1

# 2. Space-separated
print("\n🔹 2. Factors printed in a single line (space-separated)")
i = 1
factors_str = []
while i <= n:
    if n % i == 0:
        factors_str.append(str(i))
    i += 1
print("Factors:", " ".join(factors_str))

# 3. As list
print("\n🔹 3. Factors printed as a list")
i = 1
factors_list = []
while i <= n:
    if n % i == 0:
        factors_list.append(i)
    i += 1
print("Factors:", factors_list)




<<<<<<< HEAD
# Print all even numbers from 0 to given 'n'  number , Print all Odd  numbers from 0 to given 'n'  number
=======
# Print all even numbers from 0 to given 'n'  number , Print all Odd  numbers from 0 to given 'n'  number

i = 1
n = int(input("Enter a number to find even and odd numbers: "))

while(i <= n):
    if i % 2 == 0:
        print(f"{i} is an even number")
    else:
        print(f"{i} is an odd number")
    i += 1
>>>>>>> 50facf7 (add : 004_if_else_,_loop/1_sum.cpp)
