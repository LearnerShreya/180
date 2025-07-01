#include <iostream>
#include <cmath> // Include cmath for the pow function
using namespace std;

int countDigit(int n) 
{
    int count = 0;
    while (n) 
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int ans = 0, rem, n = num;
    while (n)
    {
        rem = n % 10; // Corrected: use n instead of num
        n /= 10; // Corrected: update n instead of num
        ans += static_cast<int>(pow(rem, digit)); // Cast to int to avoid precision issues
    }
    return (num == ans); // Return true or false
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    // count digit
    int digit = countDigit(num);

    // armstrong number
    if (Armstrong(num, digit))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";
}



/* #include <iostream>
#include <cmath> // Include cmath for the pow function
using namespace std;

int countDigit(int n) 
{
    int count = 0;
    while (n) 
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int ans = 0, rem, n = num;
    while (n)
    {
        rem = n % 10; // Corrected: use n instead of num
        n /= 10; // Corrected: update n instead of num
        ans += static_cast<int>(pow(rem, digit));
    }
    return (num == ans); // Return true or false
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    // count digit
    int digit = countDigit(num);

    // armstrong number
    if (Armstrong(num, digit))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";
}
 */



/* #include<iostream>
using namespace std;

int countDigit(int n) 
{
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int ans=0, rem, n=num;
    while(n)
    {
        rem=num%10;
        num=num/10;
        ans= ans+pow(rem, digit);
    }
    if(num==ans)
    return 1;
    else 
    return 0;
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    // count digit
    int digit=countDigit(num);

    // armstrong number
    cout<<Armstrong(num, digit);
} */