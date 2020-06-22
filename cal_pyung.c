#include <stdio.h>

int main(void) {
  float m2_area;
  float pyung_area;
  printf("m2_area? \n");
  scanf("%f",&m2_area);
  pyung_area= m2_area/3.305;
  printf("pyung_area is %.1f.",pyung_area);
  return 0;
}
