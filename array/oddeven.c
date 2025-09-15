#include<stdio.h>
int main(){
     int arr[5]={6,5,4,3,1};
     for(int i=0;i<5;i++){
        if(arr[i]%2==0){
           printf(" %d it is even",arr[i]);
        }
           else{
           printf(" %d it is odd",arr[i]);
     }
    }
    return 0;
}