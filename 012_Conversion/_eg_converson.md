
## ✅ 12 Number System Conversions with Examples

We’ll convert numbers between:
**Binary (BIN)** ⬌ **Octal (OCT)** ⬌ **Decimal (DEC)** ⬌ **Hexadecimal (HEX)**

Let’s take the following example values:

* Binary: `101101`
* Octal: `55`
* Decimal: `45`
* Hex: `2D`

---

### 🔶 A. DECIMAL ↔ OTHERS (6 Conversions)

---

#### 1️⃣ DEC → BINARY

**Example:** `DEC 45`
**Method:** Divide by 2, store remainders

```
45 ÷ 2 = 22 → R:1  
22 ÷ 2 = 11 → R:0  
11 ÷ 2 = 5  → R:1  
5 ÷ 2  = 2  → R:1  
2 ÷ 2  = 1  → R:0  
1 ÷ 2  = 0  → R:1

Binary = Reverse(1 0 1 1 0 1) = **101101**
```

✅ **Answer:** `DEC 45 = BIN 101101`

---

#### 2️⃣ BINARY → DEC

**Example:** `BIN 101101`
**Method:** Multiply with powers of 2

```
= 1×2⁵ + 0×2⁴ + 1×2³ + 1×2² + 0×2¹ + 1×2⁰  
= 32 + 0 + 8 + 4 + 0 + 1 = **45**
```

✅ **Answer:** `BIN 101101 = DEC 45`

---

#### 3️⃣ DEC → OCTAL

**Example:** `DEC 45`
**Method:** Divide by 8

```
45 ÷ 8 = 5 → R:5  
5 ÷ 8  = 0 → R:5  
Octal = Reverse(5 5) = **55**
```

✅ **Answer:** `DEC 45 = OCT 55`

---

#### 4️⃣ OCTAL → DEC

**Example:** `OCT 55`
**Method:** Multiply with powers of 8

```
= 5×8¹ + 5×8⁰ = 40 + 5 = **45**
```

✅ **Answer:** `OCT 55 = DEC 45`

---

#### 5️⃣ DEC → HEX

**Example:** `DEC 45`
**Method:** Divide by 16

```
45 ÷ 16 = 2 → R:13 → D  
2 ÷ 16  = 0 → R:2  
Hex = Reverse(2 D) = **2D**
```

✅ **Answer:** `DEC 45 = HEX 2D`

---

#### 6️⃣ HEX → DEC

**Example:** `HEX 2D`
**Method:** Multiply with powers of 16

```
= 2×16¹ + D×16⁰ = 2×16 + 13×1 = 32 + 13 = **45**
```

✅ **Answer:** `HEX 2D = DEC 45`

---

### 🔷 B. REMAINING 6 CROSS-CONVERSIONS (NO DECIMAL)

---

#### 7️⃣ BINARY → OCTAL

**Example:** `BIN 101101`
**Method:** Group 3-bits from right

```
101 101 → (from right)
= 101 (5) and 101 (5)
→ OCT = **55**
```

✅ **Answer:** `BIN 101101 = OCT 55`

---

#### 8️⃣ OCTAL → BINARY

**Example:** `OCT 55`
**Method:** Each digit → 3-bit binary

```
5 = 101  
5 = 101  
→ BIN = 101101
```

✅ **Answer:** `OCT 55 = BIN 101101`

---

#### 9️⃣ BINARY → HEX

**Example:** `BIN 101101`
**Method:** Group 4-bits from right

```
0101 101 → pad left to make group of 4: 0010 1101  
0010 = 2  
1101 = D  
→ HEX = **2D**
```

✅ **Answer:** `BIN 101101 = HEX 2D`

---

#### 🔟 HEX → BINARY

**Example:** `HEX 2D`
**Method:** Each digit → 4-bit binary

```
2 = 0010  
D = 1101  
→ BIN = 00101101 → remove leading 0s → **101101**
```

✅ **Answer:** `HEX 2D = BIN 101101`

---

#### 1️⃣1️⃣ OCTAL → HEX (via Binary)

**Example:** `OCT 55`

* Step 1: OCT → BIN
  `5 = 101`, `5 = 101` → BIN = 101101
* Step 2: BIN → HEX
  `101101` → `0010 1101` → 2D

✅ **Answer:** `OCT 55 → HEX 2D`

---

#### 1️⃣2️⃣ HEX → OCTAL (via Binary)

**Example:** `HEX 2D`

* Step 1: HEX → BIN
  `2 = 0010`, `D = 1101` → BIN = 00101101
* Step 2: BIN → OCT
  `00101101` → group as `101 101` → OCT = 55

✅ **Answer:** `HEX 2D → OCT 55`

---

## ✅ Summary Table

| From → To | Example    | Result |
| --------- | ---------- | ------ |
| DEC → BIN | 45 → ?     | 101101 |
| BIN → DEC | 101101 → ? | 45     |
| DEC → OCT | 45 → ?     | 55     |
| OCT → DEC | 55 → ?     | 45     |
| DEC → HEX | 45 → ?     | 2D     |
| HEX → DEC | 2D → ?     | 45     |
| BIN → OCT | 101101 → ? | 55     |
| OCT → BIN | 55 → ?     | 101101 |
| BIN → HEX | 101101 → ? | 2D     |
| HEX → BIN | 2D → ?     | 101101 |
| OCT → HEX | 55 → ?     | 2D     |
| HEX → OCT | 2D → ?     | 55     |

---
