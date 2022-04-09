#include <stdio.h>

int main() {
  
  int km;
  float fuel, consumption;

  printf("Input total distance in km: ");
  scanf("%d", &km);
  printf("\nInput total fuel spent in liters: ");
  scanf("%f", &fuel);
  consumption = km / fuel;
  printf("\nAverage consumption (km/lt) %.2f \n", consumption);

  return 0;
}
