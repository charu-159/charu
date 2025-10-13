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

    int newsize; 
    printf("now enter new no.");
    scanf("%d",&newsize);
    arr=(int*)realloc (arr,newsize*sizeof(int));
    printf("enter %d newelement:",newsize);
    for(int i=0;i<newsize;i++){
        scanf("%d",&arr[i]);
    }
//free .arr=for.the.space.which.is .not.used
}