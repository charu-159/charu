
/*#include<stdio.h>
void sum(int a){
    //return a;
    if(a==0){
        return;
    }
    sum(a-1);
    printf("%d",a);

}
int main(){
sum(5);
}*/

#include<stdio.h>
void sum(int a){
    //return a;
    if(a==0){
        return;
    }
    
    
    printf("%d",a);
    sum(a-1);

}
int main(){
sum(5);
}