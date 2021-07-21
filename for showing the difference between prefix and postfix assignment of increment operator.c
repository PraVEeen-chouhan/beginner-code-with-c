#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number of increment a:");
    scanf("%d",&a);
    printf("enter the number of decrement c:");
    scanf("%d",&c);
    printf("for increment nuber \n");
        //now use a postincrement 
    b=a++;
     printf("the value of b:%d \n",b);
     printf("the value of a:%d \n",a);
     //now use a preincrement
     b=++a;
       printf("the value of b:%d \n",b);
       printf("for decrement \n");
       //now use a post dcrement
       d=c--;
       printf("the vslue of d:%d \n",d);
       printf("the value of c:%d \n",c);
       //now use a predrement
       d=--c;
       printf("the value of d:%d \n",d);
       return 0;

}
 
