// 05 7 pattern printing N
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, j=0, s=5;
    
    printf("\n----------******--------------\n\n");
         for(i=1 ; i<=s ; i++)
         {
               for(j=1 ; j<=s ;j++)
               {
                    if(j==1 || j==s || i==j)
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
    printf("\n-----------*******------------\n");
 
    
    getch();
    return 0;
}
