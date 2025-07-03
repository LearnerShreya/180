# ✅ ALL NUMBER SYSTEM CONVERSIONS

# 🔁 Conversions:
# --------------------------
# BIN  → DEC, OCT, HEX
# DEC  → BIN, OCT, HEX
# OCT  → BIN, DEC, HEX
# HEX  → BIN, OCT, DEC


# 🔄 BIN to DEC
n = int(input("Enter Binary number: "))
ans = 0
m = 1
while n > 0:
    rem = n % 10
    n //= 10             
    ans += rem * m
    m *= 2
print("Decimal:", ans)


# 🔄 BIN to OCT
n = int(input("Enter Binary number: "))
dec = 0
m = 1
while n > 0:
    rem = n % 10
    n //= 10
    dec += rem * m
    m *= 2
octal = 0
m = 1
while dec > 0:
    rem = dec % 8
    dec //= 8
    octal += rem * m
    m *= 10
print("Octal:", octal)


# 🔄 BIN to HEX
n = int(input("Enter Binary number: "))
dec = 0
m = 1
while n > 0:
    rem = n % 10
    n //= 10
    dec += rem * m
    m *= 2
hexadecimal = ""
while dec > 0:
    rem = dec % 16
    if rem < 10:
        hexadecimal = str(rem) + hexadecimal
    else:
        hexadecimal = chr(ord('A') + rem - 10) + hexadecimal
    dec //= 16
print("Hexadecimal:", hexadecimal)




# 🔄 DEC to BIN
n = int(input("Enter Decimal number: "))
binary = 0
m = 1
while n > 0:
    rem = n % 2
    n //= 2
    binary += rem * m
    m *= 10
print("Binary:", binary)


# 🔄 DEC to OCT
n = int(input("Enter Decimal number: "))
octal = 0
m = 1
while n > 0:
    rem = n % 8
    n //= 8
    octal += rem * m
    m *= 10
print("Octal:", octal)


# 🔄 DEC to HEX
n = int(input("Enter Decimal number: "))
hexadecimal = ""
while n > 0:
    rem = n % 16
    if rem < 10:
        hexadecimal = str(rem) + hexadecimal
    else:
        hexadecimal = chr(ord('A') + rem - 10) + hexadecimal
    n //= 16
print("Hexadecimal:", hexadecimal)


# 🔄 OCT to DEC
n = int(input("Enter Octal number: "))
ans = 0
m = 1
while n > 0:
    rem = n % 10
    ans += rem * m
    m *= 8
    n //= 10
print("Decimal:", ans)


# 🔄 OCT to BIN
n = int(input("Enter Octal number: "))
dec = 0
m = 1
while n > 0:
    rem = n % 10
    dec += rem * m
    m *= 8
    n //= 10
binary = 0
m = 1
while dec > 0:
    rem = dec % 2
    binary += rem * m
    m *= 10
    dec //= 2
print("Binary:", binary)


# 🔄 OCT to HEX
n = int(input("Enter Octal number: "))
dec = 0
m = 1
while n > 0:
    rem = n % 10
    dec += rem * m
    m *= 8
    n //= 10
hexadecimal = ""
while dec > 0:
    rem = dec % 16
    if rem < 10:
        hexadecimal = str(rem) + hexadecimal
    else:
        hexadecimal = chr(ord('A') + rem - 10) + hexadecimal
    dec //= 16
print("Hexadecimal:", hexadecimal)


# 🔄 HEX to DEC
n = input("Enter Hexadecimal number: ")
n = n.upper()
ans = 0
m = 1
for i in range(len(n) - 1, -1, -1):
    ch = n[i]
    if '0' <= ch <= '9':
        rem = ord(ch) - ord('0')
    else:
        rem = ord(ch) - ord('A') + 10
    ans += rem * m
    m *= 16
print("Decimal:", ans)


# 🔄 HEX to BIN
n = input("Enter Hexadecimal number: ")
n = n.upper()
dec = 0
m = 1
for i in range(len(n) - 1, -1, -1):
    ch = n[i]
    if '0' <= ch <= '9':
        rem = ord(ch) - ord('0')
    else:
        rem = ord(ch) - ord('A') + 10
    dec += rem * m
    m *= 16
binary = 0
m = 1
while dec > 0:
    rem = dec % 2
    binary += rem * m
    m *= 10
    dec //= 2
print("Binary:", binary)


# 🔄 HEX to OCT
n = input("Enter Hexadecimal number: ")
n = n.upper()
dec = 0
m = 1
for i in range(len(n) - 1, -1, -1):
    ch = n[i]
    if '0' <= ch <= '9':
        rem = ord(ch) - ord('0')
    else:
        rem = ord(ch) - ord('A') + 10
    dec += rem * m
    m *= 16
octal = 0
m = 1
while dec > 0:
    rem = dec % 8
    octal += rem * m
    m *= 10
    dec //= 8
print("Octal:", octal)
