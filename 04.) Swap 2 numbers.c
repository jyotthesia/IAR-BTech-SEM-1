#include<stdio.h>
int main() {
  double first, second, temp;
  printf("\nEnter first number: ");
  scanf("%lf", &first);
  printf("\nEnter second number: ");
  scanf("%lf", &second);

  
  temp = first;

  
  first = second;

  

  
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("\nAfter swapping, second number = %.2lf", second);
  return 0;
}
