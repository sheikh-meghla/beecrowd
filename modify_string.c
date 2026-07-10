#include <stdio.h>

int main() {
  char greetings[] = "Hello Meghla!";
  greetings[0] = 'y';
  printf("%s", greetings);

  return 0;
}