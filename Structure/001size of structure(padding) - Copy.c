#include<stdio.h>
#include<conio.h>
struct stud
{

     char Name[20];   //20
     char City[40];   //40
     int R_No;        //4
     float Per;       //4
     char Grade[2];      //1

};
int main()
{
    struct stud std;
    printf("size of structrue object : %d",sizeof(std));
    getch();
    return 0;
}
