/*Write a program to calculate factorial of a number*/
#include<stdio.h>
int main()
{

    int i,n,a=1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if (n==0)
    {
       printf("Factorial of a number is:%d",a); 
    }
    else
    { 
    for(i=1;i<=n;i++)
    {
       a=a*i;
    }
    printf("Factorial of a number is:%d",a);
    }
    return 0;
}