#include<stdio.h>
#include<string.h>
int main(){
    char name[]="hello";
    int ln=strlen(name);
    //frequency of each character
    int freq[256] = {0}; // Initialize frequency array for all ASCII characters
    for(int i=0; i<ln; i++){        
        freq[(int)name[i]]++; // Increment the frequency of the character
        


    
    }
}