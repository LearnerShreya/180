/* row = 1
row <= 5
print space (5-row) times 
print 'A' to 'A'+row-1, row times 
row = row+1 */
//         A 
//       B B 
//     C C C
//   D D D D
// E E E E E

/* #include <iostream>
using namespace std;

int main()
{
    char row , col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
            {cout<<"  ";}
        // for(col='A'; col<='A'+row-1; col++)
        //     {cout<<col<<" ";}
        for(col=1; col<=row; col++)
        {
            char name = 'A' + row - 1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}     */