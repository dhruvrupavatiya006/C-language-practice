#include <stdio.h>
void main()
{
    int a,n=0;
    printf("Enter the value : ");
    scanf("%d",&a);
    DHRUV:
    n=n+a;
    a--;
    if(a>=0)
    {
        goto DHRUV;
    }
    printf("\nTotal : %d",n);
}