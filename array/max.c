#include<stdio.h>
int main(){
     int arr[3]={1,20,10};
     int max;
     max=arr[0];
     for(int i=0;i<3;i++){
        if(arr[i]>max)
        max=arr[i];
        
     }
     printf("%d",max);
     return 0;
}