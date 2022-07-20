#include <stdio.h>

int main (){
  
  int workhrs;
  double salary, salbyhrs;
  char id[10];

  printf("Input the Employees ID(Max. 10 chars): \n");
  scanf("%s", id);
  printf("Input the working hours: \n");
  scanf("%d", &workhrs);
  printf("Salary amount/hr: \n");
  scanf("%lf", &salbyhrs);

  salary = salbyhrs*workhrs;
  printf("Employees ID = %s\nSalary = U$ %.2lf\n", id, salary);

  return 0;
}
