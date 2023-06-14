#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to find the sum of even no.s from 1 to n \n");
    scanf("%d",&n);
    n=n/2;
    int sum=n*(n+1);
    printf("The sum is %d",sum);
    return 0;
}