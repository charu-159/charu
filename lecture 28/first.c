#include<stdio.h>
int main(){
    int n=4;
    //leftshift
    int a=n<<1<<1; //doubleshift//4<<1=8 =2^n
                                 //8<<1=16


    printf("%d\n",a);

    //rightshift 4>>1=2
    int v=n>>1;
    printf("%d",v);
return 0;
}