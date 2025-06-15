#include <stdio.h>
int addnum();
int main()
{
    int n,i,sum=0;
    printf("Enter a numebr : ");
    scanf("%d",&n);
    addnum(n);
}
int addnum(int n,int i,int sum)
{
      for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum of first %d number : %d",n,sum);
}