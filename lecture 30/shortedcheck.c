#include<stdio.h>
int sort(int arr[],int i,int j){
if(i>=j){
    return 1;
}
if(arr[i]>arr[i+1]){
    return 0;
}
return sort(arr,i+1,j);
}


int main(){
int arr[]={1,2,3,4};
int i=0,j=3;
int result=sort(arr,i,j);
printf("%d",result);
}