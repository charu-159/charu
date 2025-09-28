#include<stdio.h>
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int srow=0,scol=0,erow=3,ecol=3;
    while (srow<=erow && scol<=ecol){
        for(int i=scol;i<=ecol;i++){
            printf("%d ",arr[srow][i]);
        }
        srow++;
        for(int i=srow;i<=erow;i++){
            printf("%d ",arr[i][ecol]);
        }
        ecol--;
        for(int i=ecol;i>=scol;i--){
            printf("%d ",arr[erow][i]);
        }
        erow--;
        for(int i=erow;i>=srow;i--){
            printf("%d ",arr[i][scol]);
        }
        scol++;
    }
    return 0;
}
    

