// second max

// #include<iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int i, arr[5]={2,6,8,4,1};
//     int ans = 8;
//     int second_max = INT_MIN;

//     for(i=0; i<5; i++)
//     {
//         if(ans==arr[i])
//         {
//             continue;
//         }
//         if(second_max<arr[i])
//         {
//             second_max = arr[i];
//         }
//     }
//         cout<<second_max;
// }


// #include<iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int i, arr[5]={2,6,8,4,1};
//     int ans = INT_MIN;
//     int second_max = INT_MIN;

//     for(i=0; i<5; i++)
//     {
//         if(ans<arr[i])
//         ans=arr[i];
//     }
//     for(i=0; i<5; i++)
//     {
//             if(ans==arr[i])
//             continue;
//         if(second_max<arr[i])
//         {
//             second_max = arr[i];
//         }
//     }
//         cout<<"Second maximum element in array is "<<second_max;
// }



#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution{
    public:
    int second_max(int arr[], int N){
        int max_val = INT_MIN;

        // Find the maximum element
        for(int i=0; i<N; i++)
        {
            if(max_val < arr[i])
                max_val = arr[i];
        }

        int second_max = INT_MIN;
        // Find the second maximum element
        for(int i=0; i<N; i++)
        {
            if(arr[i] != max_val)
                second_max = max(second_max, arr[i]);
        }
        return second_max;
    }
};

int main(){
    int arr[5] = {5, 3, 9, 1, 6};
    Solution sol;
    int answer = sol.second_max(arr, 5);
    cout << "Second maximum element is: " << answer;
    return 0;
}
