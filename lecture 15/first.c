#include<stdio.h>
int sum(int*a,int*b){
}
int main(){
    //int x=5;
    /*int *a=&x;
    printf("%d",x);
    printf("%d",&x);
    printf("%d",a);
    printf("%d",*a);
    return 0;*/

int a=5;
int b=7;
int data =sum(&a,&b);
printf("%d",data);
printf("%d",a+b);
return 0;
}
