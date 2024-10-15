/// table in range 01
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int r=0, c=0 ,i=0 ,j=0;
    
    printf("\n-----------------*******--------------------\n");
    
    /*printf("\n Enter starting point of table: ");
    scanf("%d",&spoint);
    printf("\n Enter end point of table: ");
    scanf("%d",&epoint);*/
    for(r=1 ; r<=10 ; r++)
    {
       for(c=5 ; c<=9; c++)
       {
          
             printf("%3d ",r*c);
             
          
       }
       printf("\n");
    } 
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    