// Rotate an Array by 1



#include <iostream>
using namespace std;

void rotate(int arr[], int n) {
    // Store the last element of the array
    int last = arr[n-1];

    // Shift all elements one position to the right
    for(int i = n-2; i >= 0; i--) {
        arr[i+1] = arr[i];
    }

    // Place the last element at the first position
    arr[0] = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate the array by 1 position to the right
    rotate(arr, n);

    cout << "Rotated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




// void rotate(int arr[], int n) - {
// int last = arr[n-1];
// for(int i=n-2;i>=0;i--)
// arr[i+1]=arr[i];
// arr[0]=last;
// }