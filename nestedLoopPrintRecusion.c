#include<stdio.h>
void fun(int row,int col,int i,int j){
    if(i==row)return;
    printf("%d%d\n",i,j);
    j++;
    if(j==col){
        j=0;
        i++;
    }
  fun(row,col,i,j);
}
int main()
{  
    int row=2,col=3;
    fun(row,col,0,0);
    return 0;
}