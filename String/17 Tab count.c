///Copy given string in to another string

#include<stdio.h>
#include<conio.h>

int main()
{

    char Cstr[20]={'\0'};
    char Dstr[20]={'\0'};

    int i=0;

    printf("Enter a 1st string : ");
    gets(Cstr);

    printf("--------------------------------\n");

    printf("1st string : %s .\n\n",Cstr);
    printf("2nd string : %s $$$\n",Dstr);



    while(Cstr[i] != '\0')
    {
        Dstr[i] = Cstr[i];


        i++;
    }

    printf("\n1st string            : %s .",Cstr);
    printf("\n2nd string after copy :%s .",Dstr);

    getch();
    return 0;

}
