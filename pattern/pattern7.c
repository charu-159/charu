#include<stdio.h>
int main(){
    int num=1;
 for(int i=0;i<4;i++) 
                      
    {            
        for(int j=0;j<=i;j++){
       printf(" ");
        }
        for(int k=3;k>i;k--){
            printf("%d",num++);
        }
        for(int p=1;p>=i;p--){
            printf("%d",num++);
        }
        printf("\n");
    }

    return 0;
}





