#include<stdio.h>
int sum(){
int a;
int b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
int c=a+b;
return c;
}
int main(){
    int d =sum();
    printf("%d",d);
    return 0;
}