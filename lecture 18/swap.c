#include<stdio.h>
    void swap(int *x,int *y){
    /*int temp=*x;
    *x=*y;                  
    *y=temp;*/
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    }
    int main(){
     int x = 20;
    int y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
    }
   