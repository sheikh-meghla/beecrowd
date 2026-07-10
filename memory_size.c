#include <stdio.h>

int main() {
  int Int;
  float Float;
  double Double;
  char Char;
 
  printf("%zu\n", sizeof(Int));
  printf("%zu\n", sizeof(Float));
  printf("%zu\n", sizeof(Double));
  printf("%zu\n", sizeof(Char));
  
  return 0;
}