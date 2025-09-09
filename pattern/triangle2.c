#include<stdio.h>
int main(){
    int num=65;
 for(int i=0;i<4;i++) 
                      
    {            
        for(int j=0;j<=i;j++){
       printf(" ");
        }
        for(int k=0;k<=3-i;k++){
            printf("%c",num++);
        }
        for(int p=1 ;p<=3-i;p++){
            printf("%c",num++);
        }
        printf("\n");
    }

    return 0;
}


