#include <stdio.h>

int main() {
  int dice = 1;
  
  while (dice <= 5) {
    if (dice < 5) {
      printf("No Yatzy\n");
    } 
    else {
      printf("Yatzy!\n");
    }
    dice = dice + 1;
  }

  return 0;
}