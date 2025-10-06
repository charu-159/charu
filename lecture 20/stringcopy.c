#include<stdio.h>
#include<string.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   char data[10];
   for(int i=0;name[i]!='\0';i++){
    data[i]=name[i];
   }
       printf("%s",data);
   
    return 0;
}

/*#include<stdio.h>
#include<string.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   char data[10];
   strcpy(data,name);//string copy function
   printf("%s\n",data);
    return 0;
}*/