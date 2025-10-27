//best time to buy and sell stock
/*#include<stdio.h>
int main(){
    int arr[6]={7,1,5,3,6,4};//index =day
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
     for(int i=0;i<6;i++){
        if(arr[i]<min)
        min=arr[i];
        
     }
     printf("min is:%d\n",min);
    
    int max=arr[0];
    for(int i=0;i<6;i++){
       if (arr[i]>max){
          max=arr[i];
       }
    }
    int profit;
    printf("max is :%d\n",max);
    for(int i=0;i<6;i++){
        profit=max-min;
    }
    printf("profit is:%d",profit);
    return 0;

    }*/

    #include <stdio.h>
int main(){

 
 int arr[6]={7,1,5,3,6,4};
 int minPrize=arr[0];
 int maxP=0;
 for(int i =1;i<6;i++){
    if(arr[i]<minPrize){
        minPrize=arr[i];

    }else 
    {
       int profit=arr[i]-minPrize;
       if(profit>maxP){
        maxP=profit;
       }
    }
    

 }

 printf("%d",maxP);
}




