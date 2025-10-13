//calloc use-this creat memory is chunk
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    printf("enter %d element:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}