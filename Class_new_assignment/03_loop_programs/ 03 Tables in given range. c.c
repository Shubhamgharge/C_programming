// 03 tables in given range
#include<stdio.h>
#include<conio.h>

int main()
{
    int  R=0, C=0, Spoint=0, Epoint=0 ;
    
    printf("\n Enter start point of table : ");
    scanf("%d",&Spoint);
    printf("\n Enter End point of table : ");
    scanf("%d",&Epoint);
    
    if( Spoint < Epoint) 
    { 
       
         for(R=1 ; R<=10 ;R++)
         {
               for(C=Spoint ; C<=Epoint ; C++)
               {
                     printf(" %3d ",R*C);
               
               }
               printf("\n");
         }
    }
    else
    {
         for(R=1 ; R<=10 ; R++)
         {
            for(C=Epoint ; C<=Spoint ; C++)
            {
                printf(" %3d ",R*C);
            } 
            printf("\n");
         }
    
    }
    
 
    
    getch();
    return 0;
}
