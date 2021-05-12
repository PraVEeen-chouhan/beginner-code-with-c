#include<stdio.h>
int main()
{
  int a,b,c;
  a=30;
  b=90;
  printf("Value of a is %d\n Value of b is %d \n",a,b);
  //veriable of c is temporary veriable
  //value of a assgin to c whish is temporary veriable
  c=a;
  //value of b assgin to a
  a=b;
  //value of c assgin to b
  b=c;
  printf("afterr swapping value of a is %d \n",a);
  printf("after swapping value of b is %d",b);
  return 0;
}
