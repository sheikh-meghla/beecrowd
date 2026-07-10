#include <stdio.h>

int myFunction(int x, int y);

int main() {  
  int result = myFunction(9,7 );
  printf("Result is = %d", result);
  return 0;
}

int myFunction(int x, int y) {
  return x + y;
}