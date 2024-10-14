///03 sum of N inputes numbers 
#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{ 
    int Num=0, i=0, sum=0;
    
    printf("\n-----------------*******--------------------\n");
    
    for(i=1 ; i<= size ; i++)
    {
       printf("\n Enter  number : ");
       scanf("%d",&Num);
       
       sum+=Num;
    }
     
    
     printf("\n Sum of  %d numbers  = %d ",size,sum);
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    