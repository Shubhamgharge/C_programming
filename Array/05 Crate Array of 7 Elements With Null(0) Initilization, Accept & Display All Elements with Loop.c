//05 Crate Array of 7 Elements With Null(0) Initilization, Accept & Display All Elements with Loop.
       
#include<stdio.h>
#include<conio.h>
int main()
{
   int Bill[7]={0},i=0;
   printf("\n------------********----------------\n");
   
   printf("\nArray  1st element is %d",Bill[0]);
   printf("\nArray  2nd element is %d",Bill[1]);
   printf("\nArray  3rd element is %d",Bill[2]);
   printf("\nArray  4th element is %d",Bill[3]);
   printf("\nArray  5th element is %d",Bill[4]);
   printf("\nArray  6th element is %d",Bill[5]);
   printf("\nArray  7th element is %d",Bill[6]); 
   getch();
   
   printf("\n\naccept array element :\n");
   
   for(i=0 ; i<7 ; i++)
   {
    printf("\n enter array %d element : ",i+1);
    scanf("%d",&Bill[i]);
   }
   
   printf("\n Display all elements..\n");
   
   for(i=0 ; i<7 ; i++)
   {
    printf("\n array 1st element is :%d ",Bill[0]);
   }
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
