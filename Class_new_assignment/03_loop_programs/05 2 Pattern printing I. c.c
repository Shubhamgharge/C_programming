// 05 2 pattern printing I
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
                    if(i==1 || i==s || (j==(s+1)/2))
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
