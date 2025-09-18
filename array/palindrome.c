#include<stdio.h>
int main(){
    
    int arr[6]={1,2,3,1,2,3};
    int n=6;
    int ispalindrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            ispalindrome=0;
            break;
        }
    }
        if(ispalindrome)
          printf("array is palindrome\n");
          else
             printf("array ia not palindrome\n");
    
             return 0;
    }