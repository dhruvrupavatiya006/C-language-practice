#include <stdio.h>
void main()
{
    int a[5],i,pos=0,neg=0,zer=0;
    for(i=0;i<5;i++)
    {
        printf("Enter Array Element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
    }
    printf("Positive Number : %d",pos);
    printf("\nNegative Number : %d",neg);
    printf("\nZero Numbers : %d",zer);
}