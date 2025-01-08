/////////////////////////////////////////////////////////
//                                                     //
//  05 Array Structure Accept & Display Product Info   //
//                                                     //
////////////////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>
#define size 2
struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;

};
int main()
{
    struct Product P_Arr[3];
    int i=0;

    for(int i=0 ; i<size ; i++)
    {
        printf("\n Enter %d Product Id:",i+1);
        scanf("%d",&P_Arr[i].P_Id);

        printf("\n Enter %d product Name : ",i+1);
        scanf("%s",&P_Arr[i].P_Name);

        printf("\n Enter %d Product Purchase Price : ",i+1);
        scanf("%f",&P_Arr[i].P_P_Price);

        printf("\n Enter %d Product Selling Price : ",i+1);
        scanf("%f",&P_Arr[i].P_S_Price);

        printf("----------------------------------------");
    }

    system("cls");

    printf("Display All Product information => \n");

    for(i=0 ; i<size ; i++)
    {
            printf("\n\n%d Prduct Information =>\n\n\t Id = %d. \n\t Name = %s. \n \tPurchase Price = %0.2f. \n \tSales price = %0.2f ",i+1,P_Arr[i].P_Id,P_Arr[i].P_Name,P_Arr[i].P_P_Price,P_Arr[i].P_S_Price);

    }

    getch();
    return 0;
}
