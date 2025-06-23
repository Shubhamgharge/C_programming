/// simple else-if ladder(day) 
#include<stdio.h>
#include<conio.h>

int main()
{
   int day=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter day number (1-7) to view day text: ");
   scanf("%d",&day);
    
    if(day==1)
    {
      printf("\n\n\t MONDAY");
    }
    else if(day==2) 
    {
      printf("\n\n\t TUESDAY ");
    }
    else if(day==3) 
    {
      printf("\n\n\t WEDNESDAY");
    }
    else if(day==4)
    {
      printf("\n\n\t THURSDAY");
    }
    else if(day==5) 
    {
      printf("\n\n\t FRIDAY ");
    }
    else if(day==6) 
    {
      printf("\n\n\t SATURDAY");
    }
   else if(day==7) 
    {
      printf("\n\n\t SUNDAY");
    }
    else
    {
      printf("\n\n\t Invalid day!!!");
    }
     getch();
     
    printf("\n\n Thank you !!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
