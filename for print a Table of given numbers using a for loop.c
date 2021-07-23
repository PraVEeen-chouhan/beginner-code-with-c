#include<stdio.h>
int main()
{
    int a , i;
    printf("enter the number:");
    scanf("%d",&a);
    printf("table of enter number");
    //function of table
    for(i=0; i<=10; i++) 
    {
     printf("\n%d*%d=%d",a,i,a*i);
    }
    return 0;
}
