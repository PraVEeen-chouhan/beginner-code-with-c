#include<stdio.h>
int rec(int);
int main()
{
  int a,factl;
  printf("type any number :");
  scanf("%d",&a);
  
  factl=rec(a);
  printf("Factorial value=%d\n",factl);
  return 0;
}

int rec(int y)
{
  int f;
  if(y==1)
  return (1);
  
  else
  f=y*rec(y-1);
 
  return (f);
}
