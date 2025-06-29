// without logical operator

/* #include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is the largest number.";
        }
        else
        cout<<"a is not the largest number.";
    }
    else
        cout<<"a is not the largest number.";
    
} */

// with logical operator

/* #include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    if(a>c && a>b)
        {
            cout<<"a is the largest number.";
        }
    else
        cout<<"a is not the largest number.";
    
} */


// with logical operator
// check given Character is vowel or consonant 

#include<iostream>
using namespace std;

int main()
{
    char name;
    cout<<"Enter your Character: ";
    cin>>name;
   
    if(name=='a' || name=='e'|| name=='i' || name=='o' || name=='u' )
        {
            cout<<"Your Character is vowel.";
        }
    else
        cout<<"Your Character is consonant.";
    
}