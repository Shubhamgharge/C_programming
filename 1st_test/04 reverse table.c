///04 reverce table
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int Num=0, i=0;
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter a table number to print in reverse order :");
    scanf("%d",&Num);
    
    for(i=10 ; i > 0 ; i--)
    {
       printf("\n  %d * %d :  %d ", Num, i, (Num*i));
       
    }
     
    
     
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
