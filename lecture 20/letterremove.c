//remove duplicate characters from a string
#include<stdio.h>
#include<string.h>
int main(){
   char name []="madam";
   int len=strlen(name);//'c''h'a''r''u''\0'
   int i,j;
   for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(name[i]==name[j]){
            int k;
            for(k=j;k<len;k++){
                name[k]=name[k+1];
            }
            len--;
            j--;
        }

    }
   }
   printf(" string after removing duplicate :%s",name);
   return 0;
}
