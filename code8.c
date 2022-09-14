/*Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
int main()
{
    int number,i,count=0;
    printf("Enter the Number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        count++;
    }
    if (number%number==0&&number%1==0&&number!=1&&count==2)
    {
        printf("Number is prime");
    }
    else
    printf("Number is not prime");
    return 0;
    
}