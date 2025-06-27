#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2,3,4,5,6};

    cout<<"size of array: "<<sizeof(arr)<<endl;                                   // size of arr
    cout<<"length of array: "<<sizeof(arr)/sizeof(arr[0])<<endl;                    // length of arr

    return 0;
}