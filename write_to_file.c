#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("test.txt", "w");

  fprintf(fptr, "Hello Meghla");

  fclose(fptr);

  return 0;
}