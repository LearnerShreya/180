n = input("Enter a binary number (only 0s and 1s): ")
num = n

# Check if input contains only 0 and 1
if not all(c in '01' for c in n):
    print("Invalid input! Only binary digits (0 and 1) are allowed.")
    
else:
    n = int(n)
    ans = 0
    m = 1

    while n > 0:
        rem = n%10
        n //= 10
        ans += rem*m
        m *= 2

    print(f"Decimal equivalent {num} : {ans}")
