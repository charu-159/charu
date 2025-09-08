#include<stdio.h>
int main(){
 for(int i=0;i<3;i++) //i=0-j=0,j=1,j=2
                      //i=1-j=0,j=1,j=2
    {                  //i=2-j=0.j=1.j=2
       // printf(" %d\n",i);
        for(int j=0;j<3;j++){
        printf("\n*");
        }
       // printf("\n");
    }
    return 0;
}
