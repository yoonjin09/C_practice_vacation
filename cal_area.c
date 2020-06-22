#include <stdio.h>

int main(void) {
  int width, height;
  int area;
  printf("width? ");
  scanf("%d",&width);
  printf("height? ");
  scanf("%d",&height);
  area=width*height;
  printf("area is %d.",area);
  return 0;
}
