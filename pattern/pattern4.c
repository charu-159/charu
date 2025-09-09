#include<stdio.h>
int main(){
    int num=1;
 for(int i=1;i<4;i++) 
 //for(int i=0;i<4;i++)
                      
    {                
        for(int j=3;j>=i;j--){
        printf("%d" ,num++);
        //printf("*")
        }
       printf("\n");
    }
    return 0;
}

