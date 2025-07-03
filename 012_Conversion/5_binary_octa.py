# Binary to Octal

n = int(input("Enter number: "))

# Binary to Decimal
dec = 0
m = 1
while(n > 0):
    rem = n % 10
    n //= 10
    dec += rem * m
    m *= 2

# Decimal to Octal
oct = 0
mul = 1
while(dec > 0):
    rem = dec % 8
    dec //= 8
    oct += rem * mul
    mul *= 10

print(oct)

# 🔄 BIN → DEC → OCT
