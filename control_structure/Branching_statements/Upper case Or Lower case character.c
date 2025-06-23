///upper case Or lower case character
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
    else
    {
      printf("\n\n %c is not upper case Or lower case character. ");
    }
     getch();
     
    printf("\n\n Thank you press any kay to exist!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
    
