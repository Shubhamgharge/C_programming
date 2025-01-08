////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  05 Array Structure Accept & Display Product Info 1st ,2nd ,3rd ,4th....   //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define size 5
struct Product
{
     int P_Id;
     char P_Name[20];
     float P_P_Price;
     float P_S_Price;

};
int main()
{

    struct Product P_Arr[size];
    int i=0;

    //Accept Product Information


    for(i=0 ; i<size ; i++)
    {
        printf("\n\n Accept %d Product Information",i+1);

        if(i==0)
        {
            printf("\n Enter %dst Product Id : ",i+1);
            scanf("%d",&P_Arr[i].P_Id);

            printf("\n Enter %dst Product Name :  ",i+1);
            scanf("%s",&P_Arr[i].P_Name);

            printf("\n Enter %dst Product Purchase Price: ",i+1);
            scanf("%f",&P_Arr[i].P_P_Price);

            printf("\n Enter %dst Product Selling Price : ",i+1);
            scanf("%f",&P_Arr[i].P_S_Price);

        }
        else if(i==1)
        {
            printf("\n Enter %dnd Product Id : ",i+1);
            scanf("%d",&P_Arr[i].P_Id);

            printf("\n Enter %dnd Product Name :  ",i+1);
            scanf("%s",&P_Arr[i].P_Name);

            printf("\n Enter %dnd Product Purchase Price: ",i+1);
            scanf("%f",&P_Arr[i].P_P_Price);

            printf("\n Enter %dnd Product Selling Price : ",i+1);
            scanf("%f",&P_Arr[i].P_S_Price);

        }
        else if(i==2)
        {
            printf("\n Enter %drd Product Id : ",i+1);
            scanf("%d",&P_Arr[i].P_Id);

            printf("\n Enter %drd Product Name :  ",i+1);
            scanf("%s",&P_Arr[i].P_Name);

            printf("\n Enter %drd Product Purchase Price: ",i+1);
            scanf("%f",&P_Arr[i].P_P_Price);

            printf("\n Enter %drd Product Selling Price : ",i+1);
            scanf("%f",&P_Arr[i].P_S_Price);

        }
        else
        {
            printf("\n Enter %dth Product Id : ",i+1);
            scanf("%d",&P_Arr[i].P_Id);

            printf("\n Enter %dth Product Name :  ",i+1);
            scanf("%s",&P_Arr[i].P_Name);

            printf("\n Enter %dth Product Purchase Price: ",i+1);
            scanf("%f",&P_Arr[i].P_P_Price);

            printf("\n Enter %dth Product Selling Price : ",i+1);
            scanf("%f",&P_Arr[i].P_S_Price);

        }

    }
    printf("--------------------------------------------------------------");

    system("cls");

    printf("\n Display Information...!!!!");

    for(i=0 ; i<size ; i++)
    {
        printf("\n\n Display %d Product Information =>\n\n \t Id = %d. \n \t Name = %s.\n\t Purchase Price =%0.2f.\n \t Selling Price = %0.2f\n\t",i+1,P_Arr[i].P_Id,P_Arr[i].P_Name,P_Arr[i].P_P_Price,P_Arr[i].P_S_Price);
    }



    getch();
    return 0;
}
