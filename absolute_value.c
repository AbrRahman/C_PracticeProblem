#include<stdio.h>
#include<stdlib.h>
int my_abs(int n){

  return abs(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int num = my_abs(n);
    printf("%d",num);
    return 0;
}