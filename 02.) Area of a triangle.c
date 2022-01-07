#include<stdio.h>
void main()
{
    int base, height;
    float ans;
    printf("\nEnter base of the triangle:");
    scanf("%d", &base);
    printf("\nEnter height of the triangle:");
    scanf("%d", &height);
    ans=0.5*base*height;
    printf("\nArea of triangle: %0.2f", ans);
}
