#include <stdio.h>
void main()
{
    int a[5],i,max,min;
    for(i=0;i<5;i++)
    {
        printf("Enter array element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
        else 
        {

        }
    }
    printf("Maximun number in array : %d",max);
    printf("\nMinumum number in array : %d",min);
}