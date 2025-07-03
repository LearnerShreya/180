# 🔄 DEC to OCT
n = int(input("Enter number: "))
ans = 0
m = 1

while(n > 0):
    rem = n % 8
    n //= 8
    ans += rem * m
    m *= 10

print("Octal number:", ans)
