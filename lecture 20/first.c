// Strings in C
/*#include<stdio.h>
int main(){
    char name []="charu";//'\0' is automatically added at the end of the string
    int i=0;
    printf("%s\n",name);
    //printf("%c\n",name[3]);
    return 0;
}*/

/*#include<stdio.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   int i=0;
   for(i=0;name[i]!='\0';i++){//'\0' is null character
       printf("%c\n",name[i]);
   }
    return 0;
}*/

#include<stdio.h>
int main(){
   char name []="charu";//'c''h'a''r''u''\0'
   int i=0;
   while(name[i]!='\0'){//'\0' is null character
       printf("%c\n",name[i]);
       i++;
   }
    return 0;
}

