// print column square
// column * column
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    for(row=1; row<6; row++)
    {
        for(col=1; col<6; col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}