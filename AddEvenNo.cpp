#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to find the sum of even no.s from 1 to n \n";
    cin>>n;
    n=n/2;
    int sum=n*(n+1);
    cout<<"The sum is "<<sum;
    return 0;
}