#include <stdio.h>
 int funct(int a)
{
 int m=20;
 a=m; 
 return a;
}
 int main()
{
  int a=30; 
  printf("%d\n", funct(a));
  printf("%d\n", a); 
  return 0;
}
