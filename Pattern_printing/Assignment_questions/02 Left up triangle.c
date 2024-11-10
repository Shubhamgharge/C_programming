//02 Left up triangle

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
         if(i+j<=iSize+1) 
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