#include <stdio.h>

int x = 32;

void myFunction() {
    int y = 0;
    printf("%d\n",x);

    printf("%d",y);

    printf("%d\n", x = x -1);

}

int main() {
  myFunction();



  printf("%d\n", x);
  return 0;
}