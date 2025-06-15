#include <stdio.h>
void main()
{
    int a, b;

    printf("Enter first value : ");
    scanf("%d", &a);
    printf("Enter second value : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is maximum", a);
    }
    else if (b > a)
    {
        printf("%d is maximum", b);
    }
    else
    {
        printf("Both are equal");
    }
}