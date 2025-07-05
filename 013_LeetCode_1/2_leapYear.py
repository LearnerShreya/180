
n = int(input("Enter Num: "))

# Method 1
if((n%4==0 and n%100!=0) or (n%400==0)):
    print("true")
else:
    print("false")



# Method 2
print((n % 4 == 0 and n % 100 != 0) or (n % 400 == 0))



# Method 3
class Solution:
    def checkYear(self, n):
        if((n%4==0 and n%100!=0) or (n%400==0)):
            return True
        else:
            return False
sol = Solution()
print(sol.checkYear(n))



# Method 4
class Solution:
    def checkYear(self, n):
        return (n % 4 == 0 and n % 100 != 0) or (n % 400 == 0)
sol = Solution()
print(sol.checkYear(n))