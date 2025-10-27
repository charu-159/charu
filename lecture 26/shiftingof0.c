//shifting of zero in last
#include<stdio.h>
int main(){
    int arr[6]={5,4,0,2,0,12};
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]!=0){
        arr[count++]=arr[i];
        }
    }
    while (count < 6) {
        arr[count++] = 0;
    }

    // Print the modified array
    for (int i = 0; i < 6; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}