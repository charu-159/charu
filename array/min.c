#include<stdio.h>
int main(){
     int arr[3]={6,5,4};
     int min;
     min=arr[0];
     for(int i=0;i<3;i++){
        if(arr[i]<min)
        min=arr[i];
        
     }
     printf("%d",min);
     return 0;
}