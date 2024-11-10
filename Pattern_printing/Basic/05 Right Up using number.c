//05 Right Up using number

#include<stdio.h>
#include<conio.h>

void pattarn(int);
void pattarn(int iSize)
{
   int i=0, j=0, iNum=0;
   
   for(i=1 ; i<=iSize ; i++)
   {
      for(iNum=1,j=1 ; j<=iSize ; j++,iNum++ )
      { 
         if(i<=j ) 
         {
           printf(" %d   ",iNum);
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