//remove duplicate characters from a string
#include<stdio.h>
#include<string.h>
int main(){
   char name []="madam";
   int len=strlen[name];//'c''h'a''r''u''\0'
   int i=0;
    int j=0;
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(name[i]==name[j]){
                //shift all characters to left
                int k;
                for(k=j;k<len;k++){
                    name[k]=name[k+1];
                }
                len--;
                j--;
            }
        }

    }
    return 0;
}