///05 structure using looo
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
     int i=0;
    struct stud std[2];
    for(i=0;i<=2;i++) 
    {
    
    printf("\n \nenter %d student information\n",i+1);
    
    printf("\nroll no : ");
    scanf("%d",&std[i].rno);
    
    
    printf("\n name :");
    scanf("%s",&std[i].name);
    
    printf("\n percentage :");
    scanf("%f",&std[i].per);
    
    printf("\n age:");
    scanf("%d",&std[i].age);
    }
    clrscr();
    printf("\n ********display********\n");
    
    printf("\n\n display all information\n");
     for(i=0;i<=2;i++) 
     {
       printf("\n\ndisplay %d student information=\n",i+1);
    
      printf("\n\nroll no : %d",std[i].rno);
      printf("\n name :%s",std[i].name);
      printf("\n percentage :%f",std[i].per);
      printf("\n age:%d",std[i].age);
     } 
 
    
    
   
    getch();
}