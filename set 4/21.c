#include <stdio.h>
void main()
{
    int n,reminder,reverse=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0)
    {
        reminder = n%10;
        reverse = reverse*10 + reminder;
        n /= 10;
    }
    printf("Reverse number is : %d",reverse);
}