//02 basic structure
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
    struct stud std2;
    
    std2.RNo=15;
    strcpy(std2.Name,"Raj yadav");
    std2.per=77;
    
    printf("\n display 1st student information");
    
    printf("\n\nRoll Number = %d",std1.RNo);
    printf("\nName =%s",std1.Name);
    printf("\nPercentage = %f",std1.per);
    
    printf("\n\nDisplay 2nd student information");
    
    printf("\n\nRoll Number =%d",std2.RNo);
    printf("\nName =%s",std2.Name);
    printf("\nPercentage = %f",std2.per);
    getch();
    return 0;
}