
n = int(input("Enter num: "))

ans = 0
num = n
while(n>0):
    ans = ans*10 + n%10
    n //= 10
print(ans)
if num == ans:
    print("Palindrome")
else:
    print("Not palindrome")



class Solution:
    def isPalindrome(self, n):
        # code here
        ans = 0
        num = n
        while num > 0:
            ans = ans * 10 + num % 10
            num //= 10
        return ans == n          # Returns True or False
        # if ans==n:
        #     return True
        # else:
        #     return False
sol = Solution()
print(sol.isPalindrome(111))