#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=2*n-1,s=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<s;j++){
            printf(" ");
        }
        for(int j=1;j<=p;j++){
            printf("*");
        }
        s++;
        p-=2;
        printf("\n");
    }
    // output
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    return 0;
}