// print row and column
// row
// 4 4 4 4
// 3 3 3 3
// 2 2 2 2
// 1 1 1 1


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
    
//     for(row=6; row>=1; row--)
//     {
//         for(col=6; col>=1; col--)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }



// column
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1


#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    for(row=1; row<=6; row++)
    {
        for(col=6; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}