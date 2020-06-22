#include <stdio.h>

int main(void) {
  int kor, eng, math;
  int total;
  float average;
  printf("Kor? ");
  scanf("%d",&kor);
  printf("Eng? ");
  scanf("%d",&eng);
  printf("Math? ");
  scanf("%d",&math);
  total=math+eng+kor;
  printf("total is %d\n",total);
  average=total/3.0;
  printf("average is %0.1f",average);
  return 0;
}
