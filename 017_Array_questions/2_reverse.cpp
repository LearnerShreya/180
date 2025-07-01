// reverse array 


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = { 1,2,3,4,5,6};
//     int start=0, end=5;
    
//     while(start<end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for(int start=0; start<6; start++)
//     cout<<arr[start]<<" ";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=4, j=0;
//     int arr[5] = {3,7,2,9,5};
//     int a[5]={ };

//     while(i>=0)
//     {
//         a[j] = arr[i];
//         cout<<a[j]<<" ";
//         i--;
//     }
// }




#include<iostream>
using namespace std;

int main()
{
    int a[6] = {9,8,7,6,5,4};

    int i=5, j=0;

    while(j<i)
    {
        swap(a[j],a[i]);
        i--;
        j++;
    }
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
    
}