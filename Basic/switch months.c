///Switch months
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int month=0;
    
    printf("\n-----------------*******--------------------\n");
    
  
    printf("\n Enter a number between (0-7) for days in a week: ");
    scanf("%d",&month);
    
    switch(month)
    {
         case 1:
                printf("\n January..!");
                break;
         case 2:
                printf("\n February..!");
                break;
         case 3:
                printf("\n March..!");
                break;
        case 4:
                printf("\n April..!");
                break;
        case 5:
                printf("\n May..!");
               break;
        case 6:
                printf("\n June..!");
               break;
        case 7:
                printf("\n July..!");
               break;
        case 8:
                printf("\n August..!");
                break;
         case 9:
                printf("\n September..!");
                break;
         case 10:
                printf("\n October..!");
                break;
        case 11:
                printf("\n November..!");
                break;
        case 12:
                printf("\n December..!");
               break;
        default:
                printf("\n Invalid input..!!\n No day found..");     
    }

    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    