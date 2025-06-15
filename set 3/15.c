#include <stdio.h>
void main()
{
    int m;
    printf("Enter a month : ");
    scanf("%d",&m);

    switch(m)
    {
        case '1':
        printf("January = 31 days");
        break;
         case '2':
        printf("February = 28 days");
        break;
         case '3':
        printf("March = 31 days");
        break;
         case '4':
        printf("April = 30 days");
        break;
         case '5':
        printf("May = 31 days");
        break;
         case '6':
        printf("June = 30 days");
        break;
         case '7':
        printf("July = 31 days");
        break;
         case '8':
        printf("August = 31 days");
        break;
         case '9':
        printf("September = 30 days");
        break;
         case '10':
        printf("Octomber = 31 days");
        break;
         case '11':
        printf("November = 30 days");
        break;
         case '12':
        printf("Desember = 31 days");
        break;
        default:
        printf("Enter valid month");
        break;
    }
}