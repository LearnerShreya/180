// Check whether rectangle or not

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter length of 4 sides of rectangle: ";
    cin>>a>>b>>c>>d;

    if(a==b&&c==d || a==c&&b==d || a==d&&b==c)
    cout<<"Yes, it is a rectangle.";

    else
    cout<<"No, it is not a rectangle.";
}


/* #include<iostream>
using namespace std;

class Solution
{
    public:
    bool isRectangle(int a, int b, int c, int d )
    {
        if(a==b&&c==d || a==c&&b==d || a==d&&b==c)
        return 1;

        else
        return 0;
    }
};

int main()
{
    int a,b,c,d;
    cout<<"Enter length of 4 sides of rectangle: ";
    cin>>a>>b>>c>>d;

    Solution sol;

    if(sol.isRectangle(a, b, c, d))
    cout<<"Yes, it is a rectangle.";

    else
    cout<<"No, it is not a rectangle.";
} */