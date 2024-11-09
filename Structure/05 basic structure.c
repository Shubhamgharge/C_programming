///05 basic structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
    int rno;
    char name[20];
    float per;
    int age;
};
int main()
{
    struct stud std1={2,"raj",77.54,19};
    struct stud std2;
    struct stud std3;
    
    std2.rno=4;
    strcpy(std2.name,"shubham");
    std2.per=78.246;
    std2.age=20;
    
    printf("\n \nenter 3rd student information\n");
    
    printf("\nroll no : ");
    scanf("%d",&std3.rno);
    
    
    printf("\n name :");
    scanf("%s",&std3.name);
    
    printf("\n percentage :");
    scanf("%f",&std3.per);
    
    printf("\n age:");
    scanf("%d",&std3.age);
    
    clrscr();
    printf("\n\n display all information\n");
    
    printf("\n 1st student information=\n");
    
   printf("\n\nroll no : %d",std1.rno);
    printf("\n name :%s",std1.name);
    printf("\n percentage :%f",std1.per);
    printf("\n age:%d",std1.age);
    
    printf("\n\n 2nd student information=\n");
    
   printf("\nroll no : %d",std2.rno);
    printf("\n name :%s",std2.name);
    printf("\n percentage :%f",std2.per);
    printf("\n age:%d",std2.age);
    
    printf("\n\n 3rd student information=");
    
    printf("\n\nroll no : %d",std3.rno);
    printf("\n name :%s",std3.name);
    printf("\n percentage :%f",std3.per);
    printf("\n age:%d",std3.age);
    
    
    
   
    getch();
}