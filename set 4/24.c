#include <stdio.h>
void main()
{
  int f=1,i,n;
  printf("Enter a number : ");
  scanf("%d",&n);

  if(n<0)
  {
    printf(" ERORR!!Factorial of negative number is not possible");
  }
  else{
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
     printf("Factorial is : %d",f);
   
  }
}