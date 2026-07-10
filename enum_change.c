#include <stdio.h>

enum Level {
  LOW = 34,
  MEDIUM = 44,
  HIGH = 54
};
  
int main() {
  enum Level Var = MEDIUM;
  printf("%d", Var);
  
  return 0;
}