#include<stdio.h>
int main(){
     int arr[5]={1,2,3,5,6};
     int target=5;

     for(int i=0;i<5;i++){
        if(arr[i] ==target)
        printf("%d",i);
     }
    }