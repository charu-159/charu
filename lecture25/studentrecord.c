//student record management
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;

};
int main(){
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("enter your name ");
        scanf("%s",&s1[i].name);
        printf("enter your roll no.");
        scanf("%d",&s1[i].rollno);
        printf("enter your mark");
        scanf("%f",&s1[i].marks);

    }
    for(int i=0;i<5;i++){
     printf("%s",&s1[i].name);
     printf("%d",&s1[i].rollno);
     printf("%f",&s1[i].marks);
    }
    return 0;
}