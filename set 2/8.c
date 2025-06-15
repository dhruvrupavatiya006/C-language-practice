#include <stdio.h>
void main()
{
    int first,second,temp;

    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);

    temp = first;
    first = second;
    second = temp;

    printf("First number after swapping : %d",first);
    printf("Second number after swapping : %d",second);

}