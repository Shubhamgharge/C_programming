/// table in range user range 02
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int r=0, c=0 ,spoint=0 ,epoint=0;
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter starting point of table: ");
    scanf("%d",&spoint);
    printf("\n Enter end point of table: ");
    scanf("%d",&epoint);
    
           if(spoint > epoint) 
            {
             printf("\n invalid input..!!");
            }
            
    for(r=1 ; r<=10 ; r++)
    {
       for(c=spoint ; c<=epoint ; c++)
       {
            
              printf("%3d ",r*c);
          
       }
       printf("\n");
    } 
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    