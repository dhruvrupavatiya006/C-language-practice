#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}s;
int main()
{
    printf("Enter Imformation:\n");
    printf("Enter Name : ");
    gets(s.name);
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    printf("Enter Marks : ");
    scanf("%d",&s.marks);

    // **********Display imformation*********

    printf("Displaying Imformation:\n");
    printf("Name : %s",s.name);
    printf("\nRoll NO. : %d",s.roll);
    printf("\nMarks : %f",s.marks);
    return 0;
}