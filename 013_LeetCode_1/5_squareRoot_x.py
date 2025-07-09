
n = int(input("Enter Num: "))
ans = 0
for i in range(n + 1):
    if i * i <= n:
        ans = i
print(ans)


class Solution:
    def integerSquareRoot(n):
        start = 0
        end = n
        ans = 0
        while start <= end:
            mid = (start + end) // 2
            if mid * mid <= n:
                ans = mid
                start = mid + 1
            else:
                end = mid - 1
        return ans

sol = Solution()
n = int(input("Enter Num: "))
print(sol.integerSquareRoot(n))


# start = 0, end = 10
# mid = (0 + 10) // 2 = 5 → 5*5 = 25 > 10 → Too big → end = 4
# mid = (0 + 4) // 2 = 2 → 2*2 = 4 ≤ 10 → Possible → ans = 2 → start = 3
# mid = (3 + 4) // 2 = 3 → 3*3 = 9 ≤ 10 → Possible → ans = 3 → start = 4
# mid = (4 + 4) // 2 = 4 → 4*4 = 16 > 10 → Too big → end = 3
# Loop ends → Final answer = 3.


# Brute-force
# "Check every number from 0 to n, keep the largest whose square ≤ n."
# Binary Search
# "Keep halving the search space; if mid² ≤ n, move right and store mid, else move left."