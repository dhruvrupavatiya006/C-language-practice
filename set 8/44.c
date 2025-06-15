#include <stdio.h>
void oddeven(int n)
{
    if(n%2==0)
    {
        printf("%d is even number",n);
    }
    else 
    {
        printf("%d is odd number",n);
    }
}
void main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
    oddeven(n);
}