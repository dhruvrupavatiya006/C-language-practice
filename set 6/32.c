#include <stdio.h>
void main()
{
    int a[5],i,odd=0,even=0;
    for(i=0;i<5;i++)
    {
        printf("Enter array element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    printf("Number of even value : %d",even);
    printf("\nNumber of odd value : %d",odd);
}