# 🔄 DEC to BIN
n = int(input("Enter num: "))
m = 1
ans = 0

while(n>0):
    rem = n%2
    n //= 2
    ans += rem*m
    m *= 10

print(ans)