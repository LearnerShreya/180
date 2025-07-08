
n = int(input("Enter Num: "))

# Approach 1: Binary Conversion + Sum
s = 0
m = 1
t = n
while t > 0:
    s += (t % 2) * m
    t //= 2
    m *= 10
a = 0
while s > 0:
    a += s % 10
    s //= 10
print("Power of 2" if a == 1 else "Not Power of 2")

# Approach 2: Bitwise (n & (n - 1) == 0 → Works directly on binary internally; e.g., 8(1000) & 7(0111) → 0)
print("Power of 2" if n > 0 and n & (n - 1) == 0 else "Not Power of 2")

# Approach 3: Binary String Count
print("Power of 2" if bin(n).count('1') == 1 else "Not Power of 2")

# Approach 4: Math Log
from math import log2
print("Power of 2" if n > 0 and log2(n).is_integer() else "Not Power of 2")

# Approach 5: Loop Division
t = n
while t % 2 == 0 and t > 1:
    t //= 2
print("Power of 2" if t == 1 else "Not Power of 2")

# Approach 6: Set Lookup
p = {2**i for i in range(31)}
print("Power of 2" if n in p else "Not Power of 2")
