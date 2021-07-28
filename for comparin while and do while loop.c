#include<stdio.h>
int main()
{
 int k=0;
 int j=0; 
 printf("now you will be in while loop");//for while loop
 while(j<8)
 {
   printf("The values are %d \n",j);
   j++;
 }
 do
 {
  printf("now you will be in do while loop \n");//for do while loop
  printf("The values are %d \n",k);
  k++;
 }while(k<7);
return 0;
}
