#include<stdio.h>
int main()
{
    int num=234;
    int sum=0;
    while(num>0)
    {
        int lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;

    }
    printf("Sum of digits=%d\n",sum);
    return 0;
}