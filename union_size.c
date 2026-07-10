#include <stdio.h>

union Union {
  int Num;
  char String[50];
};

int main() {
  union Union u1;
  printf("Size of union: %zu bytes\n", sizeof(u1));
  return 0;
}