#include<stdio.h>
void main()
{
int j,k;
for(j=1; j<=2; j++)
{
  for(k=1; k<=2; k++)
  {
    if(j==k)
    continue;
    
    printf("%d %d\n",j,k);
  }
}

}
