#include <stdio.h>
#include <stdlib.h>

int main(){

 int f,s,t,result,max;

  printf("Input the first integer: ");
  scanf("%d", &f);
  printf("\nInput the second integer: ");
  scanf("%d", &s);
  printf("\nInput the third integer: ");
  scanf("%d", &t);
  
  result = ((f+s) + abs(f-s))/2;
  max = ((result+t) + abs(result-t))/2;

  printf("\nMaximum value of three integers: %d\n", max);

  return 0;
}

