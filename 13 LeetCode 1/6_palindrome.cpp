// A palindrome number is a number that is same after reverse. 
// For example 121, 34543, 343, 131, 48984 are the palindrome numbers.

// number is Palindrome or not 

#include <iostream>
using namespace std;

int main() {
    long long num, rem, n, ans = 0;             // using int generate integer overflow. When reversing the integer, the intermediate or final value can exceed the maximum value an int can hold in C++, which leads to overflow and incorrect results.
    cout << "Enter the Number = ";
    cin >> num;

    // Negative numbers are not palindromes
    if (num < 0) {
        cout << "It is not a palindrome number.";
        return 0;
    }

     n = num;

    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }

    cout << "Your palindrome is " << ans << endl;
    if (n == ans)
        cout << "It is a palindrome number.";
    else
        cout << "It is not a palindrome number.";

    return 0;
}








/* class Solution {
  public:
  bool isPalindrome(int x) {

    if(x<0)
    return 0;

    int num = x, rem, ans=0;

    while(num)
    {
      rem = num%10;
      num/=10;
      if(ans>INT_MAX/10)
      return 0;
      ans= ans*10+rem;
    };

    if(ans==x)
    return 1;
    else
    return 0;

  }
}; */




/* #include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}   */