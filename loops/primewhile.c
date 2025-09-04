#include<stdio.h>
int main()
{
    int n ;
    printf("enter a no.");
    scanf("%d",&n);
    int isPrime=1;
    int i;
    {
    
        while(i<n/2)
        {
            if(n%i==0){
                isPrime=0;
                break;
            }
            i++;
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
        

