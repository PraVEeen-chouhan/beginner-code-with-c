#include<stdio.h>
int main()
{
    int a,b;
    printf("using bitwise operator like AND OR and XOR \n");
    printf("enter the tow nuber which between to use bitwise operater a and b: \n ");
    scanf("%d %d",&a,&b);
    //AND OPERATOR
    a&b;
    printf("the value of a&b :%d  \n",a&b);
    //OR OPERATOR
    a|b; 
    printf(" the value of a|b\n: %d",a|b);
    //XOR OPERATER
    a^b;
    printf("the value of a^b  \n: %d",a^b);
    return 0;
}
