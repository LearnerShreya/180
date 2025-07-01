

# ✅ While and Do-While Loops – C++ & Python

---

## 🔁 Looping Concepts Overview

A **loop** allows a block of code to repeat **multiple times** as long as a condition is true.

There are **3 types of loops**:

1. `for` loop – used when we know how many times to repeat
2. `while` loop – checks condition **before** executing
3. `do-while` loop – checks condition **after** executing

---

## ✅ 1. `while` Loop

### 🔹 C++ Syntax:

```cpp
while (condition) {
    // code block
}
```

### 🔹 Python Syntax:

```python
while condition:
    # code block
```

### 🔹 Working:

* **Condition is checked first**
* If it's **true**, code runs
* Repeats until condition becomes **false**
* **If false initially**, the code **won’t run even once**

### 🔹 Flowchart:

```
     +------------+
     |  condition |
     +------------+
           |
       +---+---+
     T |       | F
       ↓       ↓
  +---------+  End
  |  block  |
  | of code |
  +---------+
      ↑
      | (loop back)
```

### 🔹 C++ Example:

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
// Output: 1 2 3 4 5
```

### 🔹 Python Example:

```python
i = 1
while i <= 5:
    print(i, end=" ")
    i += 1
# Output: 1 2 3 4 5
```

---

## ✅ 2. `do-while` Loop

### 🔹 C++ Syntax:

```cpp
do {
    // code block
} while (condition);
```

### 🔹 Python Equivalent (Simulated):

```python
i = 1
while True:
    print(i, end=" ")
    i += 1
    if i > 5:
        break
# Output: 1 2 3 4 5
```

### 🔹 Working:

* **Code runs first**, then condition is checked
* If condition is **true**, it repeats
* So, code runs **at least once** no matter what

### 🔹 Flowchart:

```
  +---------+
  |  block  |
  | of code |
  +---------+
       ↓
 +------------+
 |  condition |
 +------------+
       |
   +---+---+
 T |       | F
   ↓       ↓
 (loop)   End
```

### 🔹 C++ Example:

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
```

### 🔹 Python Simulated Example:

```python
i = 1
while True:
    print(i, end=" ")
    i += 1
    if i > 5:
        break
# Output: 1 2 3 4 5
```

---

## 🔁 Difference Between `while` and `do-while`

| Feature            | `while`                     | `do-while`                  |
| ------------------ | --------------------------- | --------------------------- |
| Condition check    | Before loop starts          | After code runs once        |
| Minimum executions | 0 times (may not run)       | 1 time (runs at least once) |
| Use-case           | When you may skip execution | When you want **1+** runs   |

> 🔹 In Python, only `while` exists. To mimic `do-while`, use `while True:` + `break`.

---

## 🧠 Real-Life Analogy:

| Loop Type  | Analogy Example                                              |
| ---------- | ------------------------------------------------------------ |
| `while`    | Checking weather before going out                            |
| `do-while` | Stepping out, then checking if you should continue or return |

---

## 📝 Tip:

👉 Always use a **condition that eventually becomes false** to avoid **infinite loops**.

---