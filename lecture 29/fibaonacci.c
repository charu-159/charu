#include<stdio.h>

int fibo(int a){
    if(a == 0){
         return 0;
    }
   else if(a == 1){
      return 1;
   }
    else return fibo(a-1) + fibo(a-2);
}

int main(){
    int count, i;
    printf("Enter the number of Fibonacci terms you want: ");
    scanf("%d", &count);
    printf("Fibonacci series: ");
    for (i = 0; i < count; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}

