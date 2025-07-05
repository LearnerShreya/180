
# Notes: Add Digits (Repeated Digit Sum / Digital Root)

## Problem Statement:

Given an integer `num`, repeatedly add all its digits until the result has only one digit. Return this single-digit result.

---

## Concept:

This problem revolves around finding the **digital root** of a number.

**Digital Root:**
The process of summing the digits of a number repeatedly until a single-digit number remains.

---

## Example:

Input: num = 38
Steps:
3 + 8 = 11 → 1 + 1 = 2
Output: 2

---

## Method 1: Loop-Based Solution (Simple & Beginner-Friendly)

### Code:

```python
class Solution(object):
    def addDigits(self, num):
        while num >= 10:
            sum = 0
            while num > 0:
                sum += num % 10
                num //= 10
            num = sum
        return num
```

### Explanation:

* The outer loop runs until `num` becomes a single digit.
* The inner loop sums all digits of `num`.
* This process repeats until a single-digit result is obtained.

### Time Complexity:

O(log n × log n)
The number reduces with each round of digit summing.

### Dry Run Example (num = 38):

* First round: 3 + 8 = 11 → num becomes 11.
* Second round: 1 + 1 = 2 → num becomes 2.
* Final result: 2.

---

## Method 2: Optimized Digital Root Formula (Best & Fastest)

### Code (Two Versions):

#### Version 1 (Readable):

```python
class Solution(object):
    def addDigits(self, num):
        if num == 0:
            return 0
        return 1 + (num - 1) % 9
```

#### Version 2 (Compact):

```python
class Solution(object):
    def addDigits(self, num):
        return 0 if num == 0 else 1 + (num - 1) % 9
```

---

### Explanation:

This method uses the mathematical concept of **digital root** using modulo 9.

#### Key Formula:

1 + (num - 1) % 9

#### Why This Works:

* In base-10, powers of 10 modulo 9 are always 1:

  * 10 % 9 = 1, 100 % 9 = 1, etc.
* Therefore, the sum of digits of a number has the same result as num % 9.
* However, we need to adjust for two special cases:

  1. **num = 0:**
     Result should be 0 (handled separately).
  2. **Multiples of 9:**
     For numbers like 9, 18, 27, num % 9 gives 0, but we need to return 9 (the correct digital root).

#### Why Subtract 1 and Add 1:

* Subtracting 1 shifts the range correctly to handle multiples of 9.
* Adding 1 after modulo brings the value back to the correct range.

#### Formula Explained:

* (num - 1) % 9 shifts the number down by 1 to handle multiples of 9.
* Adding 1 shifts it back correctly, covering all cases.

---

### Time Complexity:

O(1) — Constant time.

---

### Dry Run Example (num = 38):

Formula: 1 + (38 - 1) % 9 → 1 + (37 % 9) → 1 + 1 → 2.
Correct answer.

---

### Why 9 is Used:

The entire method is based on modulo 9 because:

* Our number system is base-10.
* In base-10, every place value is a multiple of 10, and 10 % 9 = 1.
* This makes modulo 9 the perfect choice for computing the digital root.

---

## Comparison Table:

| Feature               | Loop Method           | Digital Root Formula              |
| --------------------- | --------------------- | --------------------------------- |
| Approach              | Sum digits repeatedly | Mathematical formula              |
| Time Complexity       | O(log n × log n)      | O(1)                              |
| Ease of Understanding | Very Easy             | Requires basic math understanding |
| Space Complexity      | O(1)                  | O(1)                              |
| Suitable For          | Learning, Practice    | Competitive Coding, Interviews    |

---

## Summary:

* **Loop Method:** Simple, easy-to-understand method that demonstrates digit summing clearly.
* **Digital Root Formula:** Highly efficient, mathematically elegant, and best suited for optimized solutions.
* Both methods provide correct results.

---

## Recommended Use:

* Use **Loop Method** for learning, basic coding practice, and clarity.
* Use **Digital Root Formula** for competitive coding, interviews, and optimized production code.

---