#include <stdio.h>

int main(){

  int f,s,t;

  printf("Input the first integer: ");
  scanf("%d", &f);
  printf("\nInput the second integer: ");
  scanf("%d", &s);
  printf("\nInput the third integer: ");
  scanf("%d", &t);

  if(f>s && f>t){
    printf("Maximum value of three integers: %d\n", f);
  }
  else if(s>f && s>t){
    printf("Maximum value of three integers: %d\n", s);
  }
  else {
    printf("Maximum value of three integers: %d\n", t);
  }

  return 0;
}
