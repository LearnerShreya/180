

# Function to find the binary complement of a number

def findComplement(num):
    # Step 1: Convert the number into binary string (remove '0b' prefix)
    binary = bin(num)[2:]  # Example: bin(5) → '0b101' → '101'
    
    # Step 2: Flip the bits manually (change 0 to 1, and 1 to 0)
    flipped = ''  # This will store the flipped binary digits
    for digit in binary:
        if digit == '0':
            flipped += '1'
        else:
            flipped += '0' 
    
    # Step 3: Convert flipped binary string back to decimal (base 2)
    complement = int(flipped, 2)
    
    return complement

n = int(input("Enter a number: "))
print("Complement:", findComplement(n))
