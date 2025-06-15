#include <stdio.h>
struct employee
{
    char name[50];
    int salary;
};
struct employee get_data();
void display_data(int el);
void main(int employee)
{
    struct employee el;
    printf("Enter the Name of Employee:\n");
    scanf("%s",&el.name);
    printf("Enter the Salary of Employee:\n");
    scanf("%d",&el.salary);
}