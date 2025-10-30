//add
/*#include<stdio.h>
int sum(int a){
   if(a==0){
    return 0 ;
}
return a+sum(a-1);
   
}
int main(){
 int data= sum(5);
  printf("%d",data)  ;
}*/

//factorial
#include<stdio.h>
int fact(int a){
   if(a==0 || a==1){
    return 1;
}
return a*fact(a-1);
   
}
int main(){
 int data= fact(3);
  printf("%d",data);
}

