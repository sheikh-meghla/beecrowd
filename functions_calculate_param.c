#include<stdio.h>
void Sum(int x, int y) {
  int sum = x + y;
  int mul = x * y;
  int sub = x - y;
  int div = x / y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
  printf("The sub of %d - %d is: %d\n", x, y, sub);
  printf("The mul of %d * %d is: %d\n", x, y, mul);
  printf("The div of %d / %d is: %d\n", x, y, div);


}

int main() {
  Sum(5, 3);

  return 0;
}