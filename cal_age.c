#include <stdio.h>

int main(void) {
  int birth_year;
  int age;
  printf("Birth year? ");
  scanf("%d",&birth_year);
  age=2020-birth_year+1;
  printf("%d\n",age);
  return 0;
}
