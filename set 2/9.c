#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter first value : ");
    scanf("%d", &a);
    printf("Enter second value : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping first value : %d", a);
    printf("\nAfter swapping second value : %d", b);
}