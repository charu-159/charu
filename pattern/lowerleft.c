#include<stdio.h>
int main(){
 for(int i=1;i<4;i++) 
 //for(int i=0;i<4;i++)
                      
    {                
       for(int j=1;j<=i;j++){
        // for(int j=0;j<=i;j++)
        printf("%d" ,j);
        //printf("*")
        }
       printf("\n");
    }
    return 0;
}
