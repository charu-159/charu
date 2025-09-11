#include<stdio.h>

int isprime(int a){
    if(a<=1)
    for(int i =2;i<=a/2;i++){
    if(a%i==0)
    return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}







