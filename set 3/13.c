#include <stdio.h>
void main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is an Alphabet",ch);
    }
    else if(ch>='1' && ch<='9')
    {
        printf("%c is an Digit",ch);
    }
    else 
    {
        printf("%c is an special Character",ch);
    }

}