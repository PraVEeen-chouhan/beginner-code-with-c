#include<stdio.h>
int main()
{
    //you going to shopping when you confuse 
    int a ;
    printf("enter your bugget:");
    scanf("%d",&a);
    if((a>3000)&&(a<9000))
    {
        printf("you will be go to shoes showroom of branded company ");
    }
    else if((a>999)&&(a<2999))
    {
        printf("you will be go to normal shoes shop");
    }
    else
    {
        printf("sorry\n you've not a enough money");
    }
  return 0;
}   
