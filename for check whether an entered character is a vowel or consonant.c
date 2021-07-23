#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter the your alphatet:");
    scanf("%c",&alphabet);
    if(alphabet== 'a'|| alphabet== 'e' || alphabet== 'i'|| alphabet== 'o'|| alphabet== 'u')
    //this is vowel condition
    {
        printf("this charecter is vowel");
    }
    else
    {
        printf("this charecter is consonant");
    }
    
    return 0;
}
