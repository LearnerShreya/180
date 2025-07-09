#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;


    // 1. Simple For Loop (Safest & Cleanest)
    // This stores correct value inside loop, no need to subtract 1


    int sol = 0;
    for(int i = 1; i * i <= num; i++) {
        sol = i;
    }
    cout <<sol << endl;


    // 2. While Loop (Needs subtract 1)
    // This loop goes 1 step too far, needs -1 after loop


    int n = 0;
    while(n * n <= num) {
        n++;
    }
    cout << n - 1 << endl;


    // 3. For Loop 
    // This loop also goes 1 step too far, needs -1 after loop


    int m,p;
    for(m = 1; m * m <= num; m++) {
        // Empty body, just finding limit
    }
    cout << p - 1 << endl;

    return 0;
}
