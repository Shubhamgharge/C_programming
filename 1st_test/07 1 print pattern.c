//07 1 print pattern
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int s=0, i=0 ,j=0, no=2,t=1;
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter row and column size : ");
    scanf("%d",&s);
   
    for(i=1 ; i<=s ; i++)
    {
       for(j=1 ; j<=s ; j++)
       {
          if(i>=j)
          {
             printf(" %d ",(no*t) );
             t++;
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
    