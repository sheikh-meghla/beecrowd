#include <stdio.h>

void x() {
  static int Num = 2; 
  Num++;
  printf("num = %d\n", Num);
}

int main() {

  x();
  x();
  x();

  return 0;
}