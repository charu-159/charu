#include<stdio.h>
#include<string.h>
int main(){
    char name[]="hello";
    int ln=strlen(name);
    for(int i=0;i<=ln-1;i++){
        int count=0;
        for(int j=i+1;j<ln;j++){
            if(name[i]==name[j]){
            count++;
            break;
         }
    }
    if(count==0){
        printf("%c",name[i]);
    }
}
   return 0;
}