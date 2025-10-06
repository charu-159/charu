
//2D to 1D array printing
#include<stdio.h>
int main(){
    int arr[2][2]={{2,4},{6,8}};
    int arr1[4];
    int k=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr1[k]=arr[i][j];
            k++;

        }
    }
    for(int i=0;i<4;i++){
        printf("%d",arr1[i]);
    }
    return 0;
}