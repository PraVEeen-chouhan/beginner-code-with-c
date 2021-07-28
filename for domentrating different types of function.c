#include<stdio.h>

int func1(int a);
void func2(int a);

void main(){
    int a;
    scanf("%d", &a);
     printf("\n");
    printf("%d is our number\n", a);
    
    func1(a);
    printf("\n");
    func2(a);
   printf("\n");
    
  
}




int func1(int a){
    printf("%d", a+10);
}

void func2(int a){
    printf("%d", a*10);
}
