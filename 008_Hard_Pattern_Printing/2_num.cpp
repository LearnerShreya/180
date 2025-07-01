/* row = 1
row < 5
print space 4-row times 
print row row times 
row = row+1 */
//       1 
//     2 2
//   3 3 3
// 4 4 4 4

/* #include <iostream>
using namespace std;

int main()
{
    int row , col;
    for(row=1; row<5; row++)
    {
        for(col=1; col<5-row; col++)
            cout<<"  ";
        for(col=1; col<=row; col++)
            cout<<row<<" ";
        cout<<endl;
    }
    
} */


/* row = 1
row < 5
print space 4-row times 
print 1 to row, row times 
row = row+1 */

//           1 
//         1 2
//       1 2 3
//     1 2 3 4
//   1 2 3 4 5 
// 1 2 3 4 5 6

/* #include <iostream>
using namespace std;

int main()
{
    int row , col;
    for(row=1; row<7; row++)
    {
        for(col=1; col<7-row; col++)
            cout<<"  ";
        for(col=1; col<=row; col++)
            cout<<col<<" ";
        cout<<endl;
    }
    
} */



/* row = 1
row <= 5
print space 5-row times 
print row to 1, row times 
row = row+1 */
//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int row , col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
            {cout<<"  ";}
        for(col=row; col>=1; col--)
            {cout<<col<<" ";}

        cout<<endl;
    }
}   