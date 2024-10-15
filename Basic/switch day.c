///Switch day 
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int day=0;
    
    printf("\n-----------------*******--------------------\n");
    
  
    printf("\n Enter a number between (0-7) for days in a week: ");
    scanf("%d",&day);
    
    switch(day)
    {
         case 1:
                printf("\n Sunday..!");
                break;
         case 2:
                printf("\n Monday..!");
                break;
         case 3:
                printf("\n Tuesday..!");
                break;
        case 4:
                printf("\n Wednesday..!");
                break;
        case 5:
                printf("\n Thursday..!");
               break;
        case 6:
                printf("\n friday..!");
               break;
        case 7:
                printf("\n Saturday..!");
               break;
        default:
                printf("\n Invalid input..!!\n No day found..");     
    }

    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    