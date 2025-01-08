///////////////////////////////////////////////////////////////
//
//     01Single Structure Accept And Display
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;

};
int main()
{

    struct Product Prod1,Prod2;

    //Accept Product Details
    printf("\n Accept Product information : \n\n");

    //1st ProductnDetails
    printf("Enter 1st Product Id : ");
    scanf("%d",&Prod1.P_Id);

    printf("\n Enter 1st Product Name : ");
    scanf("%s",&Prod1.P_Name);

    printf("\n Enter 1st product Purchase price : ");
    scanf("%f",&Prod1.P_P_Price);

    printf("\n Enter 1st  Product Selling price : ");
    scanf("%f",&Prod1.P_S_Price);

    //2nd Product Information

    printf("\n Enter 2nd product Id :");
    scanf("%d",&Prod2.P_Id);

    printf("\n Enter 2nd Producr Name :");
    scanf("%s",&Prod2.P_Name);

    printf("\n Enter 2nd Product Purchase Price :");
    scanf("%f",&Prod2.P_P_Price);

    printf("\n Enter 2nd product Selling Price : ");
    scanf("%f",&Prod2.P_S_Price);

    system("cls");

    printf("--------------------------------------------------------");

    printf("\n Display Product Iformation :");

    printf("\n 1st Prduct Information =>\n Id = %d. \n Name = %s. \n  Purchase Price = %0.2f. \nSales price = %0.2f ",Prod1.P_Id,Prod1.P_Name,Prod1.P_P_Price,Prod1.P_S_Price);

    //2nd product information
    printf("\n 2nd Prduct Information =>\n Id = %d. \n Name = %s. \n  Purchase Price = %0.2f. \nSales price = %0.2f ",Prod2.P_Id,Prod2.P_Name,Prod2.P_P_Price,Prod2.P_S_Price);

    getch();
    return 0;
}
