#include<stdio.h>
int odd_count(int arr[],int n){
    //   int * arr akare perameter pathano jabe
    int count =0;
    for(int i=0;i<n;i++){
      if(arr[i]%2==1){
        count ++;
      }
    }
    return count;
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
     for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("%d",odd_count(arr,n));
    return 0;
}