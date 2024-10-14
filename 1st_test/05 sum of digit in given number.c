///05 sum of digit in given number
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int Num=0, dsum=0 ,Temp=0;
    
    printf("\n-----------------*******--------------------\n");
    
    printf("\n Enter a number for calculer digit sum : ");
    scanf("%d",&Num);
    
    Temp=Num;
    
    while(Temp > 0) 
    {
       dsum= dsum + (Temp % 10) ;
       Temp= Temp / 10;
    
    }
     printf("\n Sum of   digits in %d  = %d ",Num,dsum);
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    