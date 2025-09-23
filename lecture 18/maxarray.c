#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    int max=arr[0];
    for (int i = 1; i < 4; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    printf("Maximum element is: %d\n", max);
    return 0;
}
