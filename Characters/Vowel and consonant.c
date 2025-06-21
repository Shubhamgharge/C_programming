///vowel and consonanr
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch='\0';
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter a character : ");
   scanf("%c",&ch);
    
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) 
    {
      if((ch =='A' || ch =='E' || ch=='I' || ch=='O' || ch=='U') || (ch =='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')) 
      {
          printf("\n\n %c is vowel.",ch);
      
      }
    
      else
      {
        printf("\n %c is consonant",ch);
      }
    }
    else
    {
      printf("\n in valid character.");
    } 
     getch();
     
    printf("\n\n Thank you press any kay to exist!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
    
