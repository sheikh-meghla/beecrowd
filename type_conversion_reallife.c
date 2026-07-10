#include <stdio.h>

int main() {

  int maxScore = 33;
  int userScore = 11;
  float percentage = (float) userScore / maxScore * 100.0;

  printf("User's percentage is %.1f", percentage);

  return 0;
}