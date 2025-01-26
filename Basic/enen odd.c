#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0;

    printf("enter any number : ");
    scanf("%d",&no);

    if(no==0)
    {

        printf("%d is nuteal number",no);

    }

    else if(no %2==0)
    {

        printf("%dis Even number",no);
    }

 else{

    printf("%d is odd number",no)
; }

getch();
}
