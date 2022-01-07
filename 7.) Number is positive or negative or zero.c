#include<stdio.h>
int main()
{ 
    int input;
    printf("\nEnter the number: ");
    scanf("%d",&input);
    if (input>0)
    {
        printf("\nNumber entered is positive.");
    }
    else if (input==0)
    {
        printf("\nNumber entered is ZERO.");
    }
    else
    {
        printf("\nNumber entered is negative.");
    }
    
    return 0;
}