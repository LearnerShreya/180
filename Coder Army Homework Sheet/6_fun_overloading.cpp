/* Parameter aur argument programming ki terms hain jo aksar interchangeably use ki jaati hain, lekin in dono me kuch subtle differences hain.

1. **Parameter**:
   - Function ko define karte waqt jo variables declare kiye jaate hain unhe parameters kaha jaata hai.
   - Yeh placeholders hote hain jo function ke input ko specify karte hain.
   - Example:
     ```python
     def add(a, b):  # 'a' aur 'b' yahan parameters hain
         return a + b
     ```

2. **Argument**:
   - Function ko call karte waqt jo actual values pass ki jaati hain unhe arguments kaha jaata hai.
   - Yeh actual data hota hai jo function ke parameters ko populate karta hai.
   - Example:
     ```python
     result = add(5, 3)  # 5 aur 3 yahan arguments hain
     ```

**Summary**:
- Parameters woh variables hote hain jo function definition me use hote hain.
- Arguments woh actual values hote hain jo function call ke waqt pass ki jaati hain.

Isse programming me functions ko zyada flexible aur reusable banaya ja sakta hai. */


#include<iostream>
using namespace std;

// void swap(int a, int b )      // Pass by value
void swap(int &a, int &b )      // Pass by reference
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)        // function overloading
{
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;
    
    float f1 = 4.8, f2 = 8.4;
    swap(f1, f2);
    cout<<f1<<" "<<f2<<" ";
}