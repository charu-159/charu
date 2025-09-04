#include<stdio.h>
int main()
{
    int n =8;
    int isPrime=1;
    int i;
    if(n<=1){
       printf("Not a prime number\n");
       return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
        if(isPrime==1){
            printf("%d is a prime number\n",n);
        }
        else{
            printf("%d is not a prime number\n",n);
        }
    }
        return 0;
    }
