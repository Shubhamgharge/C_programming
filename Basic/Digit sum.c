#include<stdio.h>
#include<conio.h>
int main()
{


    int no,dig,sum=0;

    printf("enter any number : ");
    scanf("%d",&no);

    while(no<0)
    {

        dig=no%10;

        sum=sum+dig;
        no=no/10;
    }
    printf("%d is digit sum",sum);

    getch();





}
