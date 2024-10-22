///01 basic structure
#include<stdio.h>
#include<conio.h>
struct stud
{
    int rno;
    char name;
    int per;
};
int main()
{
    struct stud std1;
    printf("\nroll no : %d",std1.rno);
    printf("\n name :%d",std1.name);
    printf("\n percentage :%d",std1.per);
    getch();
}