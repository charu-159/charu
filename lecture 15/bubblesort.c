#include<stdio.h>
 void bubblesort(int arr[5]){
    int n=sizeof(arr[5])/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
    }
 }
}
int main(){
    int arr[5]={3,1,2,4,5};
    bubblesort(arr);
    printf("sorted array");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);

    }
return 0;
}
