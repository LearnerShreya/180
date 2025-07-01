#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};

    // Min value
    int ans = INT_MAX;
    for (int i = 0; i < 5; i++) // Corrected the loop condition
    {
        if (ans > arr[i]) // Corrected the comparison logic
            ans = arr[i];
    }
    cout << ans << endl;

    // Max value
    ans = INT_MIN;
    for (int i = 0; i < 5; i++) 
    {
        if (ans < arr[i]) 
            ans = arr[i];
    }
    cout << ans << endl;

    return 0;
}
