//04 Crate Array of 7 Elements With Null(0) Initilization & Accept All Elements without Loop Display All Elements
       
#include<stdio.h>
#include<conio.h>
int print(int);
int main()
{
   int Bill[7]={0};
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
   
   printf("\n enter array 1st element :");
   scanf("%d",&Bill[0]);
   printf("\n enter array 2nd element :");
   scanf("%d",&Bill[1]);
   printf("\n enter array 3rd element :");
   scanf("%d",&Bill[2]);
   printf("\n enter array 4th element :");
   scanf("%d",&Bill[3]);
    printf("\n enter array 5th element :");
   scanf("%d",&Bill[4]);
   printf("\n enter array 6th element :");
   scanf("%d",&Bill[5]);
   printf("\n enter array 7th element :");
   scanf("%d",&Bill[6]);
   
   printf("\n Display all elements..\n");
   
   printf("\n array 1st element is :%d ",Bill[0]);
   printf("\n array 2nd element is :%d ",Bill[1]);
   printf("\n array 3rd element is :%d ",Bill[2]);
   printf("\n array 4th element is :%d ",Bill[3]);
   printf("\n array 5th element is :%d ",Bill[4]);
   printf("\n array 6th element is :%d ",Bill[5]);
   printf("\n array 7th element is :%d ",Bill[6]);
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
