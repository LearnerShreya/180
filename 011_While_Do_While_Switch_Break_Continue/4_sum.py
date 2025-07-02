#  Sum of 'N" natural numbers using Do While Loop

i = 1
sum = 0
n = int(input("Enter a number: "))

while i <= n:
    sum+=i
    i+=1
print(sum)