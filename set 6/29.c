#include <stdio.h>
void main()
{
    int a[5],i,sum = 0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("Enter array element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        avg = sum/5;
    }
    printf("Sum of array is : %d",sum);
    printf("\nAvarage of array is : %.2f",avg);
    
}