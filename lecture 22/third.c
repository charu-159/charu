//two string and print common letter from them 
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="charu";
    char nstr[]="archi";
    int  str1[100];
    int ln=strlen(str);
    int len=strlen(nstr);
    for(int i=0;i<ln;i++){
    for(int j=0;j<len;j++){
        if(str[i]==nstr[j]){
            printf("%c",str[i]);
        }
 
    }
}
return 0;
}
