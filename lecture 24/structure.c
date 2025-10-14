//structure 
#include<stdio.h>
#include<string.h>

struct student{
   char name[50];
   int age;
   int rollNo;
};

struct pincode{
     int pincode;
};

int main(){
     struct student s1;
     struct pincode s2;
    //  s1.age=15;
    //  s1.name="charu";
      printf("Enter the name: ");
      scanf("%s",&s1.name);
      printf("Enter age: ");
      scanf("%d",&s1.age);
      printf("Enter roll no.: ");
      scanf("%d",&s1.rollNo);
      printf("Enter pincode: ");
      scanf("%d",&s2.pincode);

      printf("Student Info.\n");
      printf("Name:%s\n",s1.name);
      printf("Age:%d\n",s1.age);
      printf("Roll no. : %d\n",s1.rollNo);
      printf("Pincode : %d\n",s2.pincode);

    // printf("%s",s1.name);
    //  printf("%d",s1.age);
     return 0;
}