//recursion
#include<stdio.h>
int palin(int arr[],int i,int j ){
    if(i<=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return palin(arr,++i,--j);

}
int main(){
    int arr[5]={1,2,3,2,1};
int startindex=0;
int endindex=4;

int data=palin(arr,startindex,endindex);
printf("%d",data);

}