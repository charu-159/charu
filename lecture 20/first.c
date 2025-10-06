#include<stdio.h>
int main(){
    char name []="hello";//'\0' is automatically added at the end of the string
    printf("%s\n",name);
    printf("%c\n",name[3]);
    return 0;
}