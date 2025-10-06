#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";//'m''a''d''a''m''\0'
    int i=0;
    int len=strlen(name);
    int palindrome=1; // assume it is a palindrome
    for(i=0;i<len/2;i++){
        if(name[i]!=name[len-i-1]){
            palindrome=0; // not a palindrome
            break;
        }
    }
    if(palindrome){
        printf("%s is a palindrome\n",name);
    } else {
        printf("%s is not a palindrome\n",name);
    }

}