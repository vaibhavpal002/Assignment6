/*Write a program to calculate sum of first N even natural numbers*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("Sum of first N even Natural Numbers is: %d",sum);
    return 0;
}