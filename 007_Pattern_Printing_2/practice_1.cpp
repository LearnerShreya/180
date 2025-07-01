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
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=row; col++)
//         {
//             cout<<col<<" ";
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

// int main(){
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=row; col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }


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
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=row; col>=1; col--)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


// * * * * * 
// * * * * 
// * * * 
// * * 
// *
#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=5; row>=1; row--)
    {
        for(col=1; col<=row; col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
