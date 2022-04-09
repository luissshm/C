#include <stdio.h>

int main() {

  double pi = 3.14;
  int radius;

  printf("Enter the radius: \n");
  scanf("%d", &radius);

  printf("\nThe area of the circle is: %.2f\n", pi*(radius*radius));
  printf("The perimeter of the circle is: %.2f\n", 2*pi*radius);

  return 0;
}
