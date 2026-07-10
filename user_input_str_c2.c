#include <stdio.h>

int main() {
  char Name[30];

  printf("Type your name and press enter: \n");

  fgets(Name, sizeof(Name), stdin);

  printf("Hello %s", Name);
  
  return 0;
}
