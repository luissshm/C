#include <stdio.h>
#include <math.h>

int sum(int a, int b){
  return a+b;
}

int diff(int a, int b){
  return a-b;
}

int mult(int a, int b){
  return a*b;
}

double div(double a, double b){
  return a/b;
}


int main(){
  printf("%.2lf\n", div(5,6));

  return 0;
}
