///upper Or lower casse, digit or special symbol
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch='\0';
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter a character : ");
   scanf("%c",&ch);
    
    if(ch >='A' && ch <='Z')
    {
      printf("\n\n %c is upper case character.",ch);
      
    }
    else if(ch >    'a' && ch <='z') 
    {
      printf("\n\n %c is lower case",ch);
      
    }
    else if(ch >= '0' && ch <= '9') 
    {
      printf("\n\n %c is digit. ",ch);
    }
    else
    {
      printf("\n %c is special symbol",ch);
    }
     getch();
     
    printf("\n\n Thank you press any kay to exist!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
    
