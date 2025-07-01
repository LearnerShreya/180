/* row = 1
row <= 5
print space (5-row) times
print *, (2*row-1) times
row = row+1 */

//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
/* #include<iostream>
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
} */


/* row = 5
row >= 1
print space (n-row) times
print *, (2*row-1) times
row = row-1 */

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, row, col;
//     cout<<"Enter number: ";
//         cin>>n;
//     for(row=n; row>=1; row--)
//     {
//         // for(col=n-row; col>=1; col--)
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<"  ";    // two space
//         }
//         // for(col=2*row-1; col>=1; col--)
//         for(col=1; col<=2*row-1; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


/* row = n 
row >= 1
print star, row times 
print space, (n - 2*row) times
print star, row times 
row = row-1
row = 1
row <= n
print star, row times 
print space, (n - 2*row) times
print star, row times 
row = row+1 */

// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
/* #include<iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter number: ";
        cin>>n;
    for(row=n; row>=1; row--)
    {
        // print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        // print space
        for(col=1; col<=(2*n)-(2*row); col++)
        {
            cout<<"  ";
        }
        // print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    
        for(row=1; row<=n; row++)
    {
        // print *

        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        // print space
        for(col=(2*n)-(2*row); col>=1; col--)
        {
            cout<<"  ";
        }
        // print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

 */



/* row = 1
row <= n 
print *, 1 to row times 
print space, (2*n - 2*) to row times
print *, 1 to row times 
row = row+1
row = n-1
row >= 1
print *, row to 1 times 
print space, (2*n - 2*) row times
print *, row to 1 times 
row = row+1 */

// *                 *
// * *             * * 
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
/* #include<iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter number: ";
        cin>>n;
    for(row=1; row<=n; row++)
    {
        // print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        // print space
        for(col=(2*n)-(2*row); col>=1; col--)
        {
            cout<<"  ";
        }
        // print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    for(row=n-1; row>=1; row--)
    {
        // print *
        for(col=row; col>=1; col--)
        {
            cout<<"* ";
        }
        // print space
        for( col=1; col<=(2*n)-(2*row); col++)
        {
            cout<<"  ";
        }
        // print *
        for(col=1; col<=row; col++)
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
//   * * * * * * *
//     * * * * *
//       * * *
//         * 
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
    for(row=n-1; row>=1; row--)
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