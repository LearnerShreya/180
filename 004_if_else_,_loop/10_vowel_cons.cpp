#include<iostream>
using namespace std;

int main()
{
    char character;
    cout<<"Enter character of your choice: ";
    cin>>character;

    if (character='a','e','i','o','u')
    cout<<character<<" is a vowel.";
    else
    cout<<character<<" is a consonant.";
}