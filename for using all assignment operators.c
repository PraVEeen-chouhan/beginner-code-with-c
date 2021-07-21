#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number a:");
    scanf("%d",&a);
    //now all assignment operater
    b=a;
    printf("value of last working operater:%d \n",b);
    b+=a;
    printf("value of last working operater:%d \n",b);
    b-=a;
    printf("value of last working operater:%d \n",b);
    b*=a;
    printf("value of last working operater:%d \n",b);
    b/=a;
    printf("value of last working operater:%d \n",b);
    b%=a;
    printf("value of last working operater:%d \n",b);
    return 0;
}
