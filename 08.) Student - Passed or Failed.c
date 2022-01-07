#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks scored:");
    scanf("%d",&marks);
    if (marks>=34)
    {
        printf("The student has PASSED.");
    }
    else
    {
        printf("The student has FAILED.");
    }
}
