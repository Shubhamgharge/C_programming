///02 basic structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
    int rno;
    char name[20];
    float per;
};
int main()
{
    struct stud std1={1,"shubham",70.52};
    struct stud std2;
    
    std2.rno=2;
    strcpy(std2.name,"raj");
    std2.per=50.2368;
    
    printf("\n \nenter 1st student information\n");
    
    printf("\nroll no : %d",std1.rno);
    printf("\n name :%s",std1.name);
    printf("\n percentage :%f",std1.per);
    
    printf("\n\n enter 2nd student information\n");
    
   printf("\nroll no : %d",std2.rno);
    printf("\n name :%s",std2.name);
    printf("\n percentage :%f",std2.per);
    
    getch();
}