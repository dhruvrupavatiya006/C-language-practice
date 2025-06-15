#include <stdio.h>
void main()
{
    int n,reminder,result=0,temp;
    printf("Enter a number : ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        reminder = n%10;
        result += reminder*reminder*reminder;
        n /= 10;
    }
    if(temp==result)
    {
        printf("%d is a armstrong number",temp);
    }
    else{
        printf("%d is not a armstrong number",temp);
    }
}