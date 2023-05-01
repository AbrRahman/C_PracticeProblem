#include<stdio.h>
int char_to_ascii(char a){
    int ans = a+0;
   return ans;
}
int main()
{
    char s;
    scanf("%c",&s);
    int x=char_to_ascii(s);
    printf("%d",x);
    return 0;
}