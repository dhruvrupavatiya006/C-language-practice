#include <stdio.h>
void main()
{
    int a[20],n,i,j,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}