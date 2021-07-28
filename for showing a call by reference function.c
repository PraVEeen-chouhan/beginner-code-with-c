#include <stdio.h> 
int funct(int *i)         //call by reference
{
 int m=20; 
 *i= m; 
 return *i;
}

 int main()
{
 int i=30;
 printf("%d\n", funct(&i));
 printf("%d\n", i);
 return 0;
}
