#include<stdio.h>
char small_to_capital(char a){
    char ans = a-32;
   return ans;
}
int main()
{
    char s;
    scanf("%c",&s);
    char x=small_to_capital(s);
    printf("%c",x);
    return 0;
}