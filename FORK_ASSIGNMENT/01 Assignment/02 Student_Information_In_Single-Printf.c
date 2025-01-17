//////////////////////////////////////////////////////////////////////////////////////
//
///       02 Accept student detailsmfrom user (Name,Roll no,Cource,City)and display in single printf.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{

    char Name[20];
    int Roll_No;
    char Cource[28];
    char City[18];

    printf("Enter Student name : \n");
    scanf("%c",&Name);
    printf("Enter Student Roll Number : \n");
    scanf("%d",&Roll_No);
    printf("Enter Coure : \n");
    scanf("%ch",&Cource);
    printf("Enter City : \n");
    scanf("%ch",&City);


    printf("Student Name : %ch \n Student Roll No : %d \n Student Cource : %ch \n Student City : %ch \n",Name);

    return 0;
   // getch();

}
