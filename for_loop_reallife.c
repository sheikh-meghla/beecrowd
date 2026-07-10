#include <stdio.h>

int main() {
  int number = 5;
  int i;

  for (i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", number, i, number * i);
  }

  return 0;
}