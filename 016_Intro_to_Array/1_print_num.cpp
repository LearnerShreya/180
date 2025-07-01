// 1 2 3 4 5 
/* #include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};                 // type 1
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";

    return 0;
} */


// 1 2 3 4 5 6 

/* #include<iostream>
using namespace std;

int main()
{
    int arr[ ] = {1,2,3,4,5,6};               // type 2
    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";

    return 0;
} */


// 1 2 3 0 0 0 

/* #include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3};                     // type 3
    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";

    return 0;
} */


// 0 0 0 0 0 0 

/* #include<iostream>
using namespace std;

int main()
{
    int arr[6] = {0};                       // type 4
    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";

    return 0;
} */



#include<iostream>
using namespace std;

int main()
{
    int arr[6] ;                            // type 5

    for(int i=0; i<6; i++)
    cin>>arr[i];

    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";

    return 0;
}


