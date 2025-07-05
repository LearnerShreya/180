
n = int(input("Enter Num: "))
sum = 0
while n>0:
    # rem = n%10
    # sum = sum*m + rem

    sum = sum*10 + n%10
    n //= 10
print(sum)



n = int(input("Enter Num: "))
rev = int(str(n)[::-1])
print(rev)
