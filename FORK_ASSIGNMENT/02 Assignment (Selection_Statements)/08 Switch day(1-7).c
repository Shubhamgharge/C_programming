#include<stdio.h>
#include<conio.h>

void Day(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter Number from (1-7) for day switch ");
    scanf("%d",&iNum);

    Day(iNum);

    getch();
    return 0;


}
Day(No)
{
    switch(No)
    {
        case 1:
            printf("The Day of Week : Monday");
            break;
        case 2:
        printf("The Day of Week : Tuesday");
        break;

        case 3:
            printf("The Day of Week : Wednesday");
            break;

        case 4:
            printf("The Day of Week : Thirsday");
            break;

        case 5:
            printf("The Day of Week : Friday");
            break;
        case 6:
            printf("The Day of Week : Saterday");
            break;
        case 7:
            printf("The Day of Week : Sunday");
            break;

        default:
            printf("Default day ..");
             break;
    }
}
