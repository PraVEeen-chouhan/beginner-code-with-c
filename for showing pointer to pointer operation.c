#include <stdio.h>
 int main ()
 {
 int v;
 int *p;
 int **ptr;
 v = 5000;     //now taking the address of a value 
 p = &v;       // take the address of ptr 
 ptr = &p;        // take the value using pptr 
 printf("Value of v = %d\n", v );
 printf("Value available at *p = %d\n", * );
 printf("Value available at **ptr = %d\n", **ptr);
 return 0;
}
