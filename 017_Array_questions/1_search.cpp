// Search an Element in an Array 


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {8, 3, 5, 9, 4};
//     int X, index = -1; // Initialize index to -1
//     cin >> X;

//     for(int i = 0; i < 5; i++)
//     {
//         if(X == arr[i])
//         {
//             index = i;
//             break;
//         }
//     }

//     if(index != -1)
//         cout << index << endl; // Print the index if X is found
//     else
//         cout << "Element not found" << endl; // Handle case where X is not in the array

//     return 0;
// }




/* class Solution {
    public:

    int search(int arr[], int N, int X)
    {
        for(int i=0; i<N; i++)
        {
            if(arr[i]==X)
            return i;
        }
        return -1;
    }
}; */



#include <iostream>
using namespace std;

class Solution {
public:
    int search(int arr[], int N, int X) {
        for (int i = 0; i < N; i++) {
            if (arr[i] == X)
                return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Example array and search target
    int arr[] = {3, 5, 7, 9, 11};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 7;

    int result = sol.search(arr, N, X);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}




// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[3]={3,2,4};
//     int target = 6;
    
//     for(int i=0; i<3; i++)
//     {
//         for(int j=i+1; j<3; j++ )
//        if(a[i]+a[j]==target)
//        cout<<"( "<<i<<","<<j<<" )";
//     }

//     return 0;
// }
