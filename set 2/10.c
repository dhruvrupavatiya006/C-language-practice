#include <stdio.h>
void main()
{
    int a,b,maximum;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    
    if(a == b)
    {
     printf("Both Equal\n");
    }
     
    maximum = (a > b) ? a : b;  
   
    printf("%d is Maximum\n", maximum);  
    
 
}