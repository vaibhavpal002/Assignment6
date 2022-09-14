/*Write a program to count digits in a given number*/
 #include<stdio.h>
 int main()
 {
    int number,count=0;
    printf("Enter the Number: ");
    scanf("%d",&number);
    if(number==0)
    {
      printf("No of digits in a number is: 1");
    }
    else
    {
    while (number!=0)
    {
        number=number/10;
        count++;
    }
    printf("No of digits in a number is:%d",count);
    }
    return 0;
    
 }