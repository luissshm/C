#include <stdio.h>
#include <math.h>

int main() {

  int amount, total;

  printf("Input the amount: ");
  scanf("%d", &amount);
  printf("There are:\n");

  total = (int)amount/100;

  printf("%d Note(s) of 100.00\n", total);
  
  amount = amount - (total*100);
  total = (int)amount/50;
  
  printf("%d Note(s) of 50.00\n", total);

  amount = amount - (total*50);
  total = (int)amount/20;

  printf("%d Note(s) of 20.00\n", total);
  
  amount = amount - (total*20);
  total = (int)amount/10;

  printf("%d Note(s) of 10.00\n", total);
  
  amount = amount - (total*10);
  total = (int)amount/5;

  printf("%d Note(s) of 5.00\n", total);

  amount = amount - (total*5);
  total = (int)amount/2;

  printf("%d Note(s) of 2.00\n", total);

  amount = amount - (total*2);
  total = (int)amount/1;

  printf("%d Note(s) of 1.00\n", total);
  return 0;
}
