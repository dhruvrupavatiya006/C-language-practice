#include <stdio.h>
void main()
{
    int y,m;

    printf("Enter year you want : ");
    scanf("%d",&y);

    m = y*365*24*60;

    printf("\nMinutes in entered year is : %d",m);
}