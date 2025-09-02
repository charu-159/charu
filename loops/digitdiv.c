#include<stdio.h>
int main()
{
    int num =48;
    float div =1;
    while(num>0)
    {
        int lastdigit=num%10;
        div=lastdigit/div;
        num=num/10;
    }
    printf("division of digits =%f/n",div);
    return 0;
}
