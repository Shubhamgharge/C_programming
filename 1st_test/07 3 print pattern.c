//07 3 print pattern
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int s=0, i=0 ,j=0;
    char ch='\0';
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter row and column size : ");
    scanf("%d",&s);
   
    for(ch='A',i=1 ; i<=s ; i++,ch++)
    {
       for(j=1 ; j<=s ; j++)
       {
          if(i+j <= s+1)
          {
             printf(" %c ",ch);
             
          }
          else
          {
             printf("   ");
          }
       }
       printf("\n");
    } 
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    