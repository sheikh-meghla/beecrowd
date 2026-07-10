#include <stdio.h>

int x = 9;

void function() {
  printf("%d\n", x);
}

int main() {
  function();

  printf("%d\n", x);
  return 0;
}