#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number which you increase a:");
    scanf("%d",&a);
    printf("enter the number which you decrease b:");
    scanf("%d",&b);
    a=++a;
    b=--b;
    printf("the value of a:%d \n",a);
    printf("the value of b:%d \n",b);
    return 0;   
}
