#include <stdio.h>
void main()
{
    int a,b;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Bitwise AND of %d and %d is : %d",a,b,a&b);
    printf("\nBitwise OR of %d and %d is : %d",a,b,a|b);
    printf("\nBitwise XOR of %d and %d is : %d",a,b,a^b);
}