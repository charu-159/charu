#include<stdio.h>
int  main(){
    int arr[4]={1,2,4,5};
    int a=0;
    for(int i=0;i<5;i++){
        a=a^i;
    }
    int v=0;
    for(int i=0;i<4;i++){
        v=v^arr[i];
    }
    int misssing=a^v;
    printf("%d",misssing);

}