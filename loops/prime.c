#include<stdio.h>
int main()
{
    int n =6;
    int i;
    if (n <= 1) {
        printf("Not prime\n");
    
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not prime\n");
            
        }
        else
        {
            printf("Prime\n");
            
        }
    }
}