# ✅ ALL NUMBER SYSTEM CONVERSIONS

# 🔢 Number Systems:
# --------------------------
# BIN → Binary       (Base 2)    → Digits: 0, 1
# OCT → Octal        (Base 8)    → Digits: 0–7
# DEC → Decimal      (Base 10)   → Digits: 0–9
# HEX → Hexadecimal  (Base 16)   → Digits: 0–9, A–F

# 🔁 Conversions:
# ----------------------------------
# BIN  → DEC, OCT, HEX
# OCT  → BIN, DEC, HEX
# DEC  → BIN, OCT, HEX
# HEX  → BIN, OCT, DEC


# ✅ ALL 12 NUMBER SYSTEM CONVERSIONS (Simplest Built-in Version)

# 🔄 BIN to DEC
n = input("Enter Binary number: ")
print("Decimal:", int(n, 2))

# 🔄 BIN to OCT
n = input("Enter Binary number: ")
dec = int(n, 2)
print("Octal:", oct(dec)[2:])

# 🔄 BIN to HEX
n = input("Enter Binary number: ")
dec = int(n, 2)
print("Hexadecimal:", hex(dec)[2:].upper())

# 🔄 OCT to DEC
n = input("Enter Octal number: ")
print("Decimal:", int(n, 8))

# 🔄 OCT to BIN
n = input("Enter Octal number: ")
dec = int(n, 8)
print("Binary:", bin(dec)[2:])

# 🔄 OCT to HEX
n = input("Enter Octal number: ")
dec = int(n, 8)
print("Hexadecimal:", hex(dec)[2:].upper())

# 🔄 DEC to BIN
n = int(input("Enter Decimal number: "))
print("Binary:", bin(n)[2:])

# 🔄 DEC to OCT
n = int(input("Enter Decimal number: "))
print("Octal:", oct(n)[2:])

# 🔄 DEC to HEX
n = int(input("Enter Decimal number: "))
print("Hexadecimal:", hex(n)[2:].upper())

# 🔄 HEX to DEC
n = input("Enter Hexadecimal number: ")
print("Decimal:", int(n, 16))

# 🔄 HEX to BIN
n = input("Enter Hexadecimal number: ")
dec = int(n, 16)
print("Binary:", bin(dec)[2:])

# 🔄 HEX to OCT
n = input("Enter Hexadecimal number: ")
dec = int(n, 16)
print("Octal:", oct(dec)[2:])



# ✅ ALL 12 NUMBER SYSTEM CONVERSIONS (Built-in Logic Cheatsheet)

# BIN → DEC  : int(n, 2)
# BIN → OCT  : oct(int(n, 2))[2:]
# BIN → HEX  : hex(int(n, 2))[2:].upper()

# OCT → DEC  : int(n, 8)
# OCT → BIN  : bin(int(n, 8))[2:]
# OCT → HEX  : hex(int(n, 8))[2:].upper()

# DEC → BIN  : bin(n)[2:]
# DEC → OCT  : oct(n)[2:]
# DEC → HEX  : hex(n)[2:].upper()

# HEX → DEC  : int(n, 16)
# HEX → BIN  : bin(int(n, 16))[2:]
# HEX → OCT  : oct(int(n, 16))[2:]