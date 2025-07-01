/* row = 1
row <= 5
print space 5-row times
print * row times
row = row+1

        * 
      * *
    * * *
  * * * *
* * * * *  
*/

/* #include <iostream>
using namespace std;

int main()
{
    int row, col;
     for(row=1; row<=5; row=row+1)
     {
        // space print
        for(col=1; col<=5-row; col++)
        {
            cout<<"  ";              // two times space
        }
        // star print 
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
      cout<<endl;
     }
} */

// Enter number: 6
//           *
//         * *
//       * * *
//     * * * *
//   * * * * * 
// * * * * * *

/* #include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter number: ";
    cin>>n;
     for(row=1; row<=n; row=row+1)
     {
        // space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";              // two times space
        }
        // star print 
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
      cout<<endl;
     }
} */


//     * 
//    * *
//   * * *
//  * * * *
// * * * * *


/* #include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter number: ";
    cin>>n;
     for(row=1; row<=n; row=row+1)
     {
        // space print
        for(col=1; col<=n-row; col++)
        {
            cout<<" ";                       // one times space
        }
        // star print 
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
      cout<<endl;
     }
} */




