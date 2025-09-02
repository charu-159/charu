#include<stdio.h>
int main()
{
    int num=487;
    int mul=1;
    while(num>0)
    {
        int lastdigit=num%10;
        mul=mul*lastdigit;
        num=num/10;
    }
    printf("multiplication of digits=%d\n",mul);
    return 0;
}