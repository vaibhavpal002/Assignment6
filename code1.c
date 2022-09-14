/*Write a program to calculate sum of first N natural number*/
 #include<stdio.h>
 int main()
 {
    int i=1,sum=0,n;
    printf("Enter the Value of N: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of first N natural Numbers is:%d",sum);
    return 0;
 }                                                                             