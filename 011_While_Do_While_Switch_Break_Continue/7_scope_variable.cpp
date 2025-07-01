//  Scope of a Variable
/* 

### What is Scope?

Scope refers to the part of a program where a variable can be accessed or used. Think of it as the area of your code where a variable "exists" and can be utilized.

### Types of Scope

1. **Local Scope**: 
   - A variable declared inside a function or a block `{}`.
   - It is only accessible within that function or block.
   - Once the function or block finishes executing, the variable is destroyed and can no longer be used.

2. **Global Scope**:
   - A variable declared outside of all functions.
   - It is accessible from any part of the code, including inside functions and blocks.
   - It exists for the entire duration of the program's execution.

### Examples in C++

#### Local Scope

```cpp
#include <iostream>
using namespace std;

void myFunction() {
    int localVariable = 5; // Local variable
    cout << "Inside function, localVariable: " << localVariable << endl;
}

int main() {
    myFunction();
    // Trying to access localVariable here will cause an error
    // cout << "Outside function, localVariable: " << localVariable << endl;
    return 0;
}
```

In this example:
- `localVariable` is declared inside `myFunction()`, so it can only be used inside `myFunction()`.
- If you try to use `localVariable` in `main()`, it will cause an error because `localVariable` does not exist there.

#### Global Scope

```cpp
#include <iostream>
using namespace std;

int globalVariable = 10; // Global variable

void myFunction() {
    cout << "Inside function, globalVariable: " << globalVariable << endl;
}

int main() {
    myFunction();
    cout << "Outside function, globalVariable: " << globalVariable << endl;
    return 0;
}
```

In this example:
- `globalVariable` is declared outside of any function, so it can be used both inside `myFunction()` and in `main()`.
- It exists throughout the program’s execution.

### Why is Scope Important?

Understanding scope is crucial for several reasons:
1. **Avoiding Errors**: Knowing where a variable can be accessed prevents errors in your code.
2. **Memory Management**: Local variables are destroyed once their scope ends, which helps manage memory efficiently.
3. **Preventing Conflicts**: It avoids conflicts or unexpected behavior by ensuring variables with the same name in different scopes do not interfere with each other.

### Summary

- **Local variables** are declared within a function or block and can only be used there.
- **Global variables** are declared outside all functions and can be used anywhere in the program.

If you have any specific questions or need more examples, feel free to ask!

 */



// 20 21 22 23 24 25 26 27 28 29 30 

#include<iostream>
using namespace std;

int main()
{
    int i = 30;
    for(int i=20; i<=30; i++)               // int i= 30; & int i=20; are different
    {
        cout<<i<<" ";
    }
    
}



// 20 21 22 23 24 25 26 27 28 29 30 
/* #include<iostream>
using namespace std;

int main()
{
    int i = 30;
    for(i=20; i<=30; i++)                    // i= 20; will initialize int i=30; into int i = 20;
    {
        cout<<i<<" ";
    }
    
} */