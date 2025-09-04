#include<stdio.h>
int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    int t1=0,t2=1,next;
   /* for(int i=1;i<=n;i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d ",t1);*/
     while(t1<=n)
        {
            printf("%d ",t1);
            next=t1+t2;
            t1=t2;
            t2=next;
        }

    
    return 0;
    }