#include<stdio.h>
int sum( int arr[],int a){
    if(a==0){
        return 0;
    }
    return arr[a-1]+sum (arr,a-1);
}

int main(){
int arr[5]={1,2,3,4,5};
    int a=5;
  int data=  sum(arr,a);
  printf("%d",data);
}
