#include<stdio.h>
#include<conio.h>
struct stud1
{

   // char Name[7];         //7
    int R_No;             //4
    char City[6];        //9
    long int Mobile_No;       //4
    float Per;            //4
};
int main()
{
    struct stud1 std1;

    printf("Size of structure is :%d",sizeof(std1));
    getch();
    return 0;
}

