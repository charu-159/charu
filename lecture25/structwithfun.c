//structure with function

#include<stdio.h>
#include<string.h>
struct book{
    char title[50];
    char author[100];
    float price;
};
void display(struct book b){
    printf("title:%s\n",b.title);
    printf("author:%s\n",b.author);
    printf("price:%f\n",b.price);

}
int main (){
    struct book b1={"harry potter","j.k",500};
    display (b1);
    return 0;

}
