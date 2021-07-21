#include<stdio.h>

int main()
{ 
    int a,b;
    printf("Enter first integer value\n");
    scanf("%d",&a);
    //enter the second number which you sawpping with first number
    printf("Enter second integer value\n");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\nAfter swapping value of first integer is %d \nsecond integer is %d",a,b);
    return 0;
}
