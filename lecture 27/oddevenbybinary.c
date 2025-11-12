#include<stdio.h>
int main(){
    int n=5;//101=1odd
    //if(n){
    if(n&1){//bitwise operator
        printf("odd");
    }else{
        printf("even");
    }
return 0;
}