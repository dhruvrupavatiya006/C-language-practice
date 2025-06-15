#include <stdio.h>
void main()
{
    int m;

    printf("Enter your marks : ");
    scanf("%d",&m);
    if(m>=90)
    {
        printf("A1");
    }
    else if(m>=80 || m<=89)
    {
        printf("A2");
    }
    else if(m>=70 || m<=79)
    {
        printf("B1");
    }
    else if(m>=60 || m<=69)
    {
        printf("B2");
    }
    else if(m>=50 || m<=59)
    {
        printf("C1");
    }
    else if(m>=40 || m<=49)
    {
        printf("C2");
    }
    else if(m>=33 || m<=39)
    {
        printf("D");
    }
    else 
    {
        printf("FAIL!!");
    }
}