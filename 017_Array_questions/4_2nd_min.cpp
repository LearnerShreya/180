// second min


#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int a[size];
    cout<<"Enter "<<size<<" elements in array: ";
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }

    int ans = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(a[i]<ans)
        {
            ans=a[i];
        }
    }
    cout<<"Min element is "<<ans<<endl;

    int second_min=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(a[i] != ans && a[i] < second_min)
        {
            second_min=a[i];
        }
    }
    cout<<"Second min element is "<<second_min;
}