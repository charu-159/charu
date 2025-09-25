#include<stdio.h>
int main()
{
    int num = 234;
    int original = num;
    int reversed = 0;
    while(num > 0)
    {
        int lastdigit = num % 10;
        reversed = reversed * 10 + lastdigit;
        num = num / 10;
    }
    if(original == reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);
    return 0;
}