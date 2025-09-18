#include<stdio.h>
int main(){
    
    int arr[6]={1,2,3,5,6,7};
    int n=7;
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<6;i++){
        sum+=arr[i];

    }
    printf("missing no.is :%d\n",total-sum);
    return 0;

}

