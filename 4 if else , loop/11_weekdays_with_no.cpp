#include<iostream>
using namespace std;

int main()
{
    int number_input;
    cout<<"Enter number: ";
    cin>>number_input;

    if(number_input==1)
    cout<<"Monday";

    else if(number_input==2)
    cout<<"Tuesday";

    else if(number_input==3)
    cout<<"Wednesday";

    else if(number_input==4)
    cout<<"Thursday";

    else if(number_input==5)
    cout<<"Friday";

    else if(number_input==6)
    cout<<"Saturday";

    else if(number_input==7)
    cout<<"Sunday";      

    else
    {
        cout<<"Enter valid day.";     
    }    
}