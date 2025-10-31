
#include<stdio.h>

int binarysearch(int arr[], int size, int tar){
    int s = 0;
    int end = size - 1;

    while(s <= end){
        int mid = (s + end) / 2;

        if(arr[mid] == tar){
            return mid; // mil gaya target
        }
        else if(arr[mid] < tar){
            s = mid + 1; // right side jao
        }
        else{
            end = mid - 1; // left side jao
        }
    }
    return -1; // nahi mila
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 3;
    int data = binarysearch(arr, 5, target);
    printf("%d", data);
    return 0;
}