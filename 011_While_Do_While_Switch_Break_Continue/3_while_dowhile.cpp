// While Loop
//    initialize 
//    break 
//    update 

// Do While Loop
//    initialize 
//    update 
//    break 

// 1, 2, 3, 4, 5, 

/* #include<iostream>
using namespace std;

int main()
{
    int i =1;                              //    initialize 

    do{
        cout<<i<<", ";
        i++;                              //    update 
    }
    while(i<=5);                          //    break 
} */


// 2, 3, 4, 5, 6, 

/* #include<iostream>
using namespace std;

int main()
{
    int i =1;

    do{
        i++;
        cout<<i<<", ";
    }
    while(i<=5);
} */


// Enter the number: -5
// 1,                      // 1 answer, because it will print 1 , which is initialized then it will check condition
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i =1;                              //    initialize 

    do{
        cout<<i<<", ";
        i++;                              //     update 
    }
    while(i<=n);                          //     break
}