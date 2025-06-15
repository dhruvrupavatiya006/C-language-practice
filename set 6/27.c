#include <stdio.h>
void main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter array element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}