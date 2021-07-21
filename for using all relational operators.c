#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    //now using a relation operater
    printf("if condition is true then it will give 1 otherwise 0");
    a==b;
     printf("Result is %d\n",a==b);
    a!=b;
     printf("Result is %d\n",a!=b);
    a<=b;
     printf("Result is %d\n",a<=b);
    a>=b;
     printf("Result is %d\n",a>=b);
    a<b;
     printf("Result is %d\n",a<b);
    a>b;
     printf("Result is %d\n",a>b);
    return 0;
}
