#include<stdio.h>
#include<string.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   int i=0;
   int len=strlen(name);//strlen is used to find the length of the string
   printf("length of the string is %d\n",len);
   return 0;
}

