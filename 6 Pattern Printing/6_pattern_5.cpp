// column
// a b c d
// a b c d
// a b c d
// a b c d

// #include<iostream>
// using namespace std;

// int main()
// {
//     char row, col;
    
//     for(row=1; row<=5; row++)
//     {
//         for(col='a'; col<='e'; col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// column
// a b c d
// a b c d
// a b c d
// a b c d

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
    
//     for(row=1; row<=5; row++)
//     {
        
//         for(col=1; col<=5; col++)
//         {
//             char name = 'a' + col-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }


// 97 98 99 100 
// 97 98 99 100
// 97 98 99 100
// 97 98 99 100
// 97 98 99 100

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    for(row=1; row<=5; row++)
    {
        char name = 'a';
        for(col=1; col<=5; col++)
        {
            cout<<name + col-1<<" ";
        }
        cout<<endl;
    }
}



/* 
### First Code Snippet (Printing Characters)

1. **Character Arithmetic**:
   - `name` is calculated as `'a' + col - 1`.
   - The result is a `char` based on ASCII values. For example:
     - For `col = 1`, `'a' + 1 - 1` results in `'a'`.
     - For `col = 2`, `'a' + 2 - 1` results in `'b'`.
     - This continues up to `'e'`.

2. **Output**:
   - Since `name` is a `char`, `cout` prints characters (`'a'`, `'b'`, `'c'`, `'d'`, `'e'`).

### Second Code Snippet (Printing Integers)

1. **Character Arithmetic**:
   - `name` is `'a'`, which has an ASCII value of 97.
   - The expression `name + col - 1` is evaluated as an `int`. For example:
     - For `col = 1`, `name + col - 1` results in `97`.
     - For `col = 2`, `name + col - 1` results in `98`.
     - This continues up to `100`.

2. **Output**:
   - The result is an `int`, so `cout` prints numeric ASCII values (97, 98, 99, 100).

### Key Points

- **Data Type Promotion**: Arithmetic with `char` is promoted to `int`. This explains why `name + col - 1` produces an integer result in the second snippet.
- **Printing Differences**:
  - In the first snippet, the result is printed as a `char`.
  - In the second snippet, the result is printed as an `int`. 
  */