#include<stdio.h>
int main()
{
 int t,l;
 int k=1;
 printf("enter required value:");    
 scanf("%d",&t);
 
 
 while(k<3)
 {
  l=t>>k;
  printf("\n The value after right shifting is %d",l);
  l++;
 }
 return 0;
}
