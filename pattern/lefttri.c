#include<stdio.h>
int main(){
 for(int i=1;i<4;i++) 
 //for(int i=0;i<4;i++)
                      
    {                
        for(int j=3;j>=i;j--){
        printf("%d" ,j);
        //printf("*")
        }
       printf("\n");
    }
    return 0;
}