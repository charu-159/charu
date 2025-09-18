#include<stdio.h>
int main(){
    
    int arr[6]={1,2,3,1,2,3};
    int n=6;
    int freq[6]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
      for(int i=0;i<6;i++){
        if(freq[i]>0){
            printf("%d comes%d times \n",i,freq[i]);

        }
    }
    return 0;

      }
