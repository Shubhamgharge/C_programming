#include<stdio.h>
#include<conio.h>

void Character(char);
int main()
{
    char ch='/0';

    printf("Enter any character from (A to Z) or (a to z) : ");
    scanf("%c",&ch);

   Character(ch);

    getch();
    return 0;
}
void Character(char latt)
{
    if((latt == 'a' || latt == 'e' || latt == 'i' || latt == 'o' || latt=='u') ||(latt == 'A' || latt == 'E' || latt == 'I' || latt == 'O' || latt== 'U'))
    {
        printf("\n The character '%c' is vowel.",latt);
    }
    else
    {
        printf("\n The character '%c' is consonant",latt);
    }
}
