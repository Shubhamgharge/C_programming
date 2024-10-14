//07 2 print pattern
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int s=0, i=0 ,j=0;
    char ch='\0';
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter row and column size : ");
    scanf("%d",&s);
   
    for(i=1 ; i<=s ; i++,ch++)
    {
       for(j=1 ; j<=s ; j++)
       {
          if(j==1 || j==s || i==1 ||i==s)
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
    