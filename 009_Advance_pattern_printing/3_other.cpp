
//   * * 
//     * * * * 
//       * * * * * * 
//         * * * * * * * * 
//           * * * * * * * * * * 

/* #include<iostream>
using namespace std;

int main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=0; col<=2*row-1; col++)
        {
            cout<<" ";
        }
        for(col=0; col<=2*row-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
} */

// * * 
// * * * *
// * * * * * *
// * * * * * * * *
// * * * * * * * * * *
/* #include<iostream>
using namespace std;

int main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=0; col<=2*row-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
} */

/* row = 1
row <= 5
print space (5-row) times
print *, (2*row-1) times
row = row+1

//     * 
//    * * *
//   * * * * *
//  * * * * * * *
// * * * * * * * * *
/* #include<iostream>
using namespace std;

int main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            cout<<" ";        // one space
        }
        for(col=1; col<=2*row-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
} */


//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter num: ";
        cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";    // two space
        }
        for(col=1; col<=2*row-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}