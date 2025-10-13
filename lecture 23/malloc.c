//malloc function use
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter %d element:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("you have entered:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
//free .arr=for.the.space.which.is .not.used
}