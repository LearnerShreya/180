// row = 1 
// row <= 5
// print * row times
// row = row + 1
// * 
// * *
// * * *
// * * * *
// * * * * *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=row; col++ )
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// row = 1
// row<=5
// print row , row times 
// row = row+1
// 1 
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<i+1; j++ )
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// row = 1
// row<=5
// print 1 to row
// row = row+1
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<i+1; j++ )
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// row = 1
// row < 5
// print column row + 1 times
// row = row + 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=2; i<=5; i++)
    {
        for(j=1; j<i+1; j++ )
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}