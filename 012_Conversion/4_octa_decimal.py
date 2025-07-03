
n = int(input("Enter number: "))
ans = 0
m = 1

while(n>0):
    rem = n%10
    n //= 10
    ans += rem*m
    m *= 8
print(ans)