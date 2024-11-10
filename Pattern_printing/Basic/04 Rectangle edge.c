//04 Rectangle edge

#include<stdio.h>
#include<conio.h>
void pattarn(int);
void pattarn(int iSize)
{
   int i=0, j=0;
   for(i=1 ; i<=iSize ; i++)
   {
      for(j=1 ; j<=iSize ; j++ )
      { 
         if(i==j || i==1 || j==1 || i==iSize || j==iSize) 
         {
           printf(" *   ");
         }
         
         else
         {
           printf("     ");
         }
      }
      printf("\n");
   }


}
int main()
{
     int iValue=0;
     
     printf("\n Enter Row and Column size : ");
     scanf("%d",&iValue);
     
     pattarn(iValue);
     
     getch();
     return 0;
}