#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter the nbumber: ";
    cin>>i;
    switch(i)
    {
        case 1:
        cout<<"Sunday";
        break ;

        case 2:
        cout<<"Monday";
        break ;
    
        case 3:
        cout<<"Tuesday";
        break ;
    
        case 4:
        cout<<"Wednesday";
        break ;
    
        case 5:
        cout<<"Thursday";
        break ;
    
        case 6:
        cout<<"Friday";
        break ;
    
        case 7:
        cout<<"Saturday";
        break ;

        default :
        cout<<"Enter valid day.";
    }
    
}