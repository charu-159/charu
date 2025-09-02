#include<stdio.h>
int main()
{
    int num=487;
    int sub=0;
    while(num>0)
    {
        int lastdigit=num%10;
        sub=sub-lastdigit;
        num=num/10;
    }
    printf("substraction of digits=%d\n",sub);
    return 0;
}