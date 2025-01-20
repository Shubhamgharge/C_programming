#include<stdio.h>
#include<conio.h>

void Month(int);

int main()
{
    int iNum=0;

    printf("Enter a number for switch month : ");
    scanf("%d",&iNum);

    Month(iNum);

    getch();
    return 0;
}
///anuary, , , , , June, , , , , , and .
Month(No)
{
    switch(No)
    {
        case 1:
            printf("The Month is january");
            break;
        case 2:
            printf("The Month is February");
            break;
        case 3:
             printf("The Month is March");
            break;
        case 4:
            printf("The Month is April");
            break;
        case 5:
            printf("The Month is May");
            break;
        case 6:
             printf("The Month is June");
            break;
        case 7:
            printf("The Month is July");
            break;
        case 8:
            printf("The Month is August");
            break;
        case 9:
             printf("The Month is September");
            break;
        case 10:
            printf("The Month is October");
            break;
        case 11:
            printf("The Month is November");
            break;
        case 12:
             printf("The Month is December");
            break;

        default:
            printf("Invalid mounth ..\n please enter number into (1-12)");
            break;

    }

}
