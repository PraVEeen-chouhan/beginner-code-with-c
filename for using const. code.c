#include <stdio.h>      
int main() 
{
  const int a=24;
  int b;
  a=25;
  //but a is a constnt so print only 24 not a new valye like 25
  b=78;
  printf("%d , %d",a,b);
  b=89;
  printf("%d ,%d",a,b);
  return 0;
}
