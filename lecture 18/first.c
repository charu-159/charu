#include<stdio.h>
int main(){
    //find the maximum sum sub array of size k
    //array subarray n*(n+1)/2 total 15
    //subarray find then max find
     int arr[]={2,1,5,4,7,8,1,2};
     int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int wsum=0;
    for(int i=0;i<k;i++){
      wsum=wsum+arr[i];
    }
    int maxsum;
    maxsum=wsum;

    for(int j=k; j<n;j++)
    {
     wsum=wsum+arr[j]-arr[j-k];
     if(wsum>maxsum)
     maxsum=wsum;
    }
       printf("%d", maxsum);
       return 0;
}

    
