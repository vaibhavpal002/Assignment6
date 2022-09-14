/*Write a program to calculate sum of first N odd natural numbers*/
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the Value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    printf("Sum of First N Odd Natural Numbers is:%d",sum);
    return 0;
}