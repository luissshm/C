#include <stdio.h>

int main() {

  double w1, c1, w2, c2, result;

  printf("Enter the weight of the item: \n");
  scanf("%lf", &w1);
  printf("Enter the number of purchase: \n");
  scanf("%lf", &c1);
  printf("Enter the weight of the 2nd item: \n");
  scanf("%lf", &w2);
  printf("Enter the number of purchase: \n");
  scanf("%lf", &c2);
  
  result = ((w1 * c1) + (w2 * c2))/ (c1 + c2);

  printf("Average Value = %lf\n", result);
  
  return 0;
}
