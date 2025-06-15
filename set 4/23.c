#include <stdio.h>
void main()
{
    int reverse=0,reminder,n,temp;

    printf("Enter a number : ");
    scanf("%d",&n);

    temp = n;
    
    while(n>0)
    {
        reminder = n%10;
        reverse += x + reminder * 10;
        n /= 10;
    }

    if(reverse==temp)
    {
        printf("%d is palindrome number",temp);
    }
    else
    {
        printf("%d is not a palindrome number",temp);
    }
}