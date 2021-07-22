#include <stdio.h>
int main()
{
  char variable1, variable2;
  printf("enter the tow alphabate for ascii value variable1 or variable2 :");
  scanf("%c %c",&variable1,&variable2);
  printf("ASCII values of these are %d or %d \n",variable1,variable2);
  //compaire
  if(variable1>variable2)
  printf("\nYou are in if");
  else    
  printf("\nYou are in else");
  return 0;
}
