#include <stdio.h>
#include <string.h>
void main()
{
    char ch[20];
    printf("Enter any string : ");
    gets(ch);

    strupr(ch);

    printf("Entered string in upper case : %s",ch);
}