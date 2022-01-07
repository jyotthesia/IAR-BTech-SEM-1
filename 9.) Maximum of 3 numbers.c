#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c)
    {
        printf("%d is the largest number", a);
    }
    if (a<b && b>c)
    {
        printf("%d is the largest number", b);
    }
    if (c>b && a<c)
    {
        printf("%d is the largest number", c);
    }
    return 0;
}