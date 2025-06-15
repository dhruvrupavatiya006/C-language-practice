#include <stdio.h>
#include <string.h>
void main() {
    char s1[20];
    int i;
    printf("Enter any string : ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++);

    printf("Length of the string : %d",i);
}