// 05 1 pattern printing H
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, j=0, s=0;
    
    printf("\n Enter row and column size : ");
    scanf("%d",&s);
    
    
         for(i=1 ; i<=s ; i++)
         {
               for(j=1 ; j<=s ;j++)
               {
                    if(j==1 || j==s || (i==(s+1)/2))
                    {
                     printf(" * ");
                    } 
                    else
                    {
                      printf("   ");
                    }
               
               }
               printf("\n");
         }
    
 
    
    getch();
    return 0;
}
