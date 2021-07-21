#include<stdio.h>
int main()
{
    int a, b ,c;
    //now using a term of logical operater
    printf("enter the three number a ,b and c\n");
    scanf("%d \n",&a);
    scanf("%d \n",&b);
    scanf("%d",&c);
    printf("if condition is true then it will give 1 otherwise 0\n");
    printf("first of all AND logical operater\n");
    int result;
    result=(a>c)&&(c<b);
    printf("(a>c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c<b);
    printf("(a<c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c>b);
    printf("(a<c)&&(c>b) is %d \n",result);
    result=(a>c)&&(c>b);
    printf("(a>c)&&(c>b) is %d \n",result);
    printf("second type of logical operater is OR then:\n");
    result=(a>c)||(c<b);
    printf("(a>c)||(c<b) is %d \n",result);
    result=(a<c)||(c<b);
    printf("(a<c)||(c<b) is %d \n",result);
    result=(a<c)||(c>b);
    printf("(a<c)||(c>b) is %d \n",result);
    result=(a>c)||(c>b);
    printf("(a>c)||(c>b) is %d \n",result);
    printf("thired type of logical operater is NOT then:\n");
    result=!(a>c);
    printf("!(a>c) is %d\n",result);
    result=!(a<c);
    printf("!(a<c) is %d",result);
    return 0;
}
