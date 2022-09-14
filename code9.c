/*Write a program to calculate LCM of two numbers*/
#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter first Number:");
    scanf("%d",&a);
    printf("Enter second Number:");
    scanf("%d",&b);
    if(a==0||b==0)
    {
        printf("LCM is: 0");
    }
    else
    {
    for(i=1;i<=(a*b);i++)
    {
        if(i%a==0&&i%b==0)
        {
        printf("LCM is :%d",i);
        break;
        }
    }
    }
    return 0;
}