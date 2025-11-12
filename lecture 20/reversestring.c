//reverse of string
#include<stdio.h>
#include<string.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   int i=0;
   int len=strlen(name);//strlen is used to find the length of the string
   for(i=len-1;i>=0;i--){
       printf("%c\n",name[i]);
   }
   char data[10];
   return 0;
}