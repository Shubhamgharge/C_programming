//08 reverce multiplication table of given number
#include<stdio.h>
#include<conio.h>
int table(int);
int main()
{
     int Num=0, i=0;
     
     printf("\n Enter a number to print table : ");
     scanf("%d",&Num);
     
     table(Num);
     
     getch();
     return 0;

}
int table(No)
{ 
    int i=0;
    
    for(i=10 ; i>=1 ; i--)
     {
         printf("\n%d*%d=%d",No,i,No*i);
     }
}     