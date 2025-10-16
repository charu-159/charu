#include<stdio.h>
#include<string.h>

struct address{
    int pincode;
    char city[10];
};
struct student{
    char name[50];
    char fulladdress[100];
    struct address addr;  
};

int main(){
    struct student s1;
    for(int i=0;i<1;i++){
    printf("enter name:");
    scanf("%s",s1.name);
    printf("enter your address:");
    scanf("%s",s1.fulladdress);
    printf("enter pincode:");
    scanf("%d",&s1.addr.pincode);
    printf("enter your city:");
    scanf("%s",s1.addr.city);
    }
    // Optional: print to verify
    printf("\n--- Details Entered ---\n");
    printf("Name: %s\n", s1.name);
    printf("Address: %s\n", s1.fulladdress);
    printf("Pincode: %d\n", s1.addr.pincode);
    printf("City: %s\n", s1.addr.city);


    return 0;
}
    