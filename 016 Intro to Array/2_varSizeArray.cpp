#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int arr[size] ;             // taking variable array SIZE is not a good habit (it cause problem in dp,heap,etc)

    cout<<"Enter array: ";
    for(int i=0; i<=size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your arrays are: ";
    for(int i=0; i<=size; i++)
    cout<<arr[i]<<" ";

    return 0;
}