#include <stdio.h>

struct Car {
  char brand[20];
  int year;
};

int main() {
  struct Car car = {"Toyota", 2011};

  struct Car *ptr = &car;

  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);

  return 0;
}