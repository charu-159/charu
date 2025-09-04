#include<stdio.h>
int main()
{
    int n=0;
    int count=0;
    printf("enter a no.");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }
    while(n>0){
        count++;
        n=n/10;
    }
    printf("no. of digits=%d\n",count);
    return 0;
}

