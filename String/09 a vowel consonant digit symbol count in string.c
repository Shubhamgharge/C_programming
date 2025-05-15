/// vowel ,consonant, digit, spacialsymbol,count in the string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[50]={'\0'};
    int i=0,Vowel_count=0,Consonant_count=0,Digit_count=0,alphabate_count=0,Spacial_count=0;

    printf(" Enter a String : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {
        if((Sname[i] >='A' && Sname[i] <='Z') || (Sname[i] >='a' && Sname[i] <='z'))
        {
              if(Sname[i]=='a' || Sname[i]=='e' || Sname[i]=='i' || Sname[i]=='o' || Sname[i]=='u' || Sname[i]=='A' || Sname[i]=='E' || Sname[i]=='I' || Sname[i]=='O' || Sname[i]=='U')
              {
                    Vowel_count++;
              }
              else
              {

                  Consonant_count++;
              }
              alphabate_count++;
        }
        else if(Sname[i] >= '0' && Sname[i]<='9')
        {
            Digit_count++;
        }
        else
        {
            Spacial_count++;
        }

        i++;
    }

    printf(" \n count of total alphabate in string : %d .",alphabate_count);
    printf(" \n count of vowel in string : %d .",Vowel_count);
    printf("\n count of consonant in string : %d .",Consonant_count);
    printf("\n count of digint in string : %d .",Digit_count);
    printf("\n count of Spacial symbol in string : %d .",Spacial_count);

    getch();
    return 0;


}
