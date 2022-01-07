#include<stdio.h>
void main()
{
    int principle, rate, time, interest;
    
    printf("\nEnter principle amount:");
    scanf("%d",&principle);
    printf("\nEnter rate of interest:");
    scanf("%d",&rate);
    printf("\nEnter time in years:");
    scanf("%d",&time);
    interest=(principle*rate*time)/100;
    printf("\nSimple interest: %d", interest);
}