#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0,i,fact=1;
  printf("Enter any number to print factorial");
  scanf("%d-",&no);
  for(i=1;i<=no;i++)

{
fact=fact*i;
} printf("Factorial is %d",fact);

getch();
}
