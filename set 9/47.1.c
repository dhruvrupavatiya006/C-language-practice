#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
}s;
int main()
{
    printf("Enter Imformation : ");
    printf("Enter name : ");
    gets(s.name);
    printf("Enter Roll no. : ");
    scanf("%d",&s.roll);
    printf("Enter marks : ");
    scanf("%d",&s.marks);

    printf("Displaying Imformation : ");
    printf("\nName : %s",s.name);
    printf("\nRoll No.: %d",s.roll);
    printf("\nMarks : %f",s.marks);
}