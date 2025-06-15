#include <stdio.h>
void main()
{
    int counter=1,n;
    printf("Enter the value of integer : ");
    scanf("%d",&n);

    START:
    printf("%d\n",counter);
    counter++;
    if(counter<=n)
    goto START;
}