// 05 3 pattern printing J
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
                    if(i==1 || j==(s+1)/2||i==s && i+j <= s+3)
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
