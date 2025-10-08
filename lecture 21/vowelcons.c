#include<stdio.h>
#include<string.h>
int main(){
    char name[]="aeioUxyz";
    int ln=strlen(name);
    for(int i=0;i<=ln-1;i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            printf("%c is a vowel\n",name[i]);
        }
        else{
            printf("%c is a consonant\n",name[i]);
        }
    }
    return 0;
}