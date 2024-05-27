#include<iostream>
using namespace std;
void swapalter(int arr[],int n)
{
    int i;
    if(n%2==0)
    {
        for(i=0;i<n;i=i+2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else{
        for(i=0;i<n-1;i=i+2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    cout<<"bhau"<<endl;
    int n,i;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements:" << endl;
    for(i=0;i<n;i++)
    {
       cin >> arr[i];
    }
    swapalter(arr,n);
    cout<<"The array after swapping is:"<<endl;
    for(i=0;i<n;i++)
    {
       cout << arr[i];
    }
    return 0;
}