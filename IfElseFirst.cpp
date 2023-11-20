#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character\n";
    cin>>ch;
    if (ch<92&&ch>64)
        cout<<"Character is capital alphabet";
    if (ch<='z'&&ch>='a')
        cout<<"Character is small alphabet";
    if (ch<='9'&&ch>='0')
        cout<<"Character is a digit";
    return 0;

}