#include <stdio.h>

int main() {
  
  
  int a = 125, b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;

  printf("print a + c -> %d\n", a + c);
  printf("print x + c -> %f\n", x + c);
  printf("print dx + x -> %f\n", dx + x);
  printf("print ((int) dx) + ax -> %ld\n", ((int) dx) + ax);
  printf("print a + x -> %f\n", a + x);
  printf("print s + b -> %d\n", s + b);
  printf("print ax + b -> %ld\n", ax + b);
  printf("print s + c -> %d\n", s + c);
  printf("print ax + c -> %ld\n", ax + c);
  printf("print ax + ux -> %ld\n", ax + ux);

  return 0;
}
