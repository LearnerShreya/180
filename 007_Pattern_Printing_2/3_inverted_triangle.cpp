// row = 1
// row <=5
// print col 5 to row
// row = row +1
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 

#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=1; row<=5; row++)
    {
        for(col=5; col>=row; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}


// row = 1
// row <= 5
// print * 5 to 5-(row -1 ) times
// row = row + 1
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1; row<=5; row++)                 
//     {
//         for(col=5; col>=row; col--)                    
// //         for(col=1; col<=5-row+1; col++)
// //       for(col=1; col<=5-(row-1); col++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1; row<=5; row++)
//     {
//         // for(col=5; col>=row; col--)
//         // for(col=1; col<=5-row+1; col++)
//       for(col=1; col<=5-(row-1); col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
    
// }



// 6 6 6 6 6 6 
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=6; row>=1; row--)
//     {
//         for(col=row; col>=1; col--)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// row = 1
// row <= 5
// print col (or (1  to)) (5 - (row-1) times )
// row = row+1
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=5; row>=1; row--)
//     // for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=row; col++)
//         //       for(col=1; col<=5-row+1; col++)
//         //       for(col=1; col<=5-(row-1); col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
    
// }



// row = 1
// row <=5
// print row 5 to 5-(row-1)
// row = row+1

// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     // for(row=5; row>=1; row--)
//     for(row=1; row<=5; row++)
//     {
//         // for(col=5; col>=row; col--)
//         for(col=5; col>=5-(row-1); col--)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
    
// }