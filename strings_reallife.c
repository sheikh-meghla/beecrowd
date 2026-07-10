#include <stdio.h>

int main() {
  
  char message[] = "Hello,";
  char name[];

  scanf("%c", &name);

  printf("%s %c!", message, name);
 
  return 0;
}