#include <stdio.h>
void main()
{
    int w,l,r,l1;
    float pi=3.14,aoc,aos,aor;

    printf("Enter radius of circle : ");
    scanf("%d",&r);
    printf("Enter length of rectangle : ");
    scanf("%d",&l);
    printf("Enter width of rectangle : ");
    scanf("%d",&w);
    printf("Enter length of square : ");
    scanf("%d",&l1);

    aoc = pi*r*r;
    aor = l*w;
    aos = l1*l1;

    printf("\nArea of circle : %f",aoc);
    printf("\nArea of rectangle : %f",aor);
    printf("\nArea of square : %f",aos);
}