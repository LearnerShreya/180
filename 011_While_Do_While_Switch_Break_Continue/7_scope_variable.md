
# 🧠 **What is Scope in Python?**

**Scope** defines the **visibility and lifetime** of a variable — where and how long the variable "lives" in the program.

---

## ✅ Types of Scope in Python:

| Type of Scope | Keyword/Area           | Example                     | Access Level              |
| ------------- | ---------------------- | --------------------------- | ------------------------- |
| **Local**     | Inside a function      | `def foo(): x = 5`          | Only inside that function |
| **Global**    | Outside functions      | `x = 10`                    | Accessible anywhere       |
| **Enclosed**  | Inside nested function | `def outer(): def inner():` | Inner uses outer          |
| **Built-in**  | Python keywords        | `print()`, `len()`          | Everywhere in Python      |

---

# 🔁 **LEGB Rule (Scope Resolution Order)**

Python follows this order when looking for a variable:

> **L → E → G → B**

| Level        | Meaning                 |
| ------------ | ----------------------- |
| **L**ocal    | Current function block  |
| **E**nclosed | Outer function block    |
| **G**lobal   | Top-level script        |
| **B**uilt-in | Default Python keywords |

---

## ✅ 1. **Local Scope**

```python
def my_function():
    x = 5  # Local variable
    print("Inside function:", x)

my_function()
# print(x)  # ❌ Error: x is not defined here
```

🔸 `x` only exists **inside** `my_function()`
🔸 Trying to access it **outside** gives an error

---

## ✅ 2. **Global Scope**

```python
x = 10  # Global variable

def my_function():
    print("Inside function:", x)

my_function()
print("Outside function:", x)
```

🔸 `x` is defined **outside all functions**
🔸 Accessible **both inside and outside**

---

## ✅ 3. **Enclosed Scope** (Nested Function)

```python
def outer():
    x = "enclosed"
    
    def inner():
        print("From inner():", x)
    
    inner()

outer()
```

🔸 `x` is **not local to `inner()`**, but is found in the **enclosed outer function**

---

## ✅ 4. **Built-in Scope**

```python
print("Hello, Shreya!")  # ✅ Built-in 'print' function
```

🔸 Functions like `print()`, `len()`, `range()` come from built-in scope
🔸 Available **everywhere in your program**

---

## ⚠️ `global` Keyword in Python

To **modify** a global variable inside a function:

```python
x = 10

def change_global():
    global x
    x = 20

change_global()
print(x)  # Output: 20
```

---

## ⚠️ `nonlocal` Keyword in Python

Used inside nested functions to modify **enclosed scope**:

```python
def outer():
    x = "outer"

    def inner():
        nonlocal x
        x = "changed in inner"
    
    inner()
    print(x)  # Output: changed in inner

outer()
```

---

## 🧪 Variable Scope Example Like C++:

```python
i = 30

for i in range(20, 31):   # This i overrides global i inside the loop
    print(i, end=' ')

print("\nOutside loop:", i)  # Still i = 30 from loop
```

### ⚠️ Note:

In Python, **loop variables are NOT block scoped**
→ So `i` will **exist after the loop** too.

---

## 📝 Summary Table:

| Scope Type | Area                     | Life of Variable               | Access                   |
| ---------- | ------------------------ | ------------------------------ | ------------------------ |
| Local      | Inside a function        | Until function finishes        | Only inside the function |
| Enclosed   | Inside a nested function | As long as outer function runs | From nested function     |
| Global     | Outside any function     | Entire program                 | From anywhere            |
| Built-in   | Provided by Python       | Always                         | Everywhere               |

---