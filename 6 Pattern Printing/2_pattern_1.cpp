// print row and column
// row
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    for(row=1; row<6; row++)
    {
        for(col=1; col<6; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}



// column
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
    
//     for(row=1; row<6; row++)
//     {
//         for(col=1; col<6; col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }