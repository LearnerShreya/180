// row = 1
// row<=5
// print row to 1
// row = row+1

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=1; i<=5; i++)
//     {
//         for(j=i; j>=1; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// row = a
// row<=e
// print row , row times 
// row = row+1
// a 
// b b
// c c c
// d d d d
// e e e e e

// #include<iostream>
// using namespace std;

// int main()
// {
//     char i,j;

//     for(i='a'; i<='e'; i++)
//     {
//         for(j='a'; j<i+1; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// row = 1
// row<=5
// print name, row times
// row = row+1

// a 
// b b
// c c c
// d d d d
// e e e e e

#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=1; row<=5; row++)
    {
         char name = 'a' + row-1;
        for(col=1; col<row+1; col++)
        {
            // char name = 'a' + row-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    
}