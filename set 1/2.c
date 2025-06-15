#include <stdio.h>
void main()
{
    int num1,num2,num3,num4,num5;
    float avg;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter second Number :");
    scanf("%d",&num2);
    printf("Enter Third Number : ");
    scanf("%d",&num3);
    printf("Enter Fourth Number : ");
    scanf("%d",&num4);
    printf("Enter Fifth Number : ");
    scanf("%d",&num5);

    avg = (num1+num2+num3+num4+num5)/5;

    printf("Avarage of Five Variables is : %f",avg);
}