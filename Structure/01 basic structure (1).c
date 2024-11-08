//01 basic structure
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
   int RNo;
   char Name[20];
   float per;
};
int main()
{
    struct stud std1={1,"Shubham Gharge",89};
    
    printf("\nRoll Number = %d",std1.RNo);
    printf("\nName =%s",std1.Name);
    printf("\nPercentage = %f",std1.per);
    
    getch();
    return 0;
}