//  Find missing number in an array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& array, int n) {

        // sum of all elements in the array
        int sum = 0;
        for(int i = 0; i < n-1; i++)
            sum += array[i];

        // sum of n elements
        int ans = n * (n + 1) / 2;

        return ans - sum;
    }
};

int main() {
    Solution sol;
    vector<int> array = {1, 2, 3, 5}; // Example array
    int n = 5; // Length of the array plus one (since one number is missing)
    int missing = sol.missingNumber(array, n);
    cout << "The missing number is: " << missing << endl;
    return 0;
}



/* #include<iostream>
using name space sd;

class Solution{
    public:
    int missingNumber(vector<int>& array, int n) {

        // sum of all elements in an array
        int sum=0;
        for(int i=0; i<n-1; i++)
        sum += array[i];

        // sum of n elements
        int ans = n*(n+1)/2;

        return ans-sum;

    }

}; */