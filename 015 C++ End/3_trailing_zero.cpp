#include<iostream>
using namespace std;

int main()
{
    int num, count = 0, result;

    cout<<"Enter number: ";
    cin>>num;

    int N=num;
    while(N>=5)
        {
            count+=N/5;
            N/=5;
        }
    result=count;
    
    cout << "Number of trailing zeroes in factorial of " << num << " is: " << result << endl;
    
    return 0;
}



/* #include<iostream>
using namespace std;

class Solution{
    public:
    int trailingZero(int N)
    {
        int count = 0;
        while(N>=5)
        {
            count+=N/5;
            N/=5;
        }
        return count;
    }
};

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int number=num;

    Solution sol;
    int result = sol.trailingZero(num);
    cout << "Number of trailing zeroes in factorial of " << num << " is: " << result << endl;
    
    return 0;
} */


