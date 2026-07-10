#include <stdio.h>

int main() {
  int age[] = {12, 13, 14, 15, 16, 17, 18, 19};
 
  float avg, sum = 0;
  int i;  
  int length = sizeof(age) / sizeof(age[0]);
    
  for (i = 0; i < length; i++) {
    sum += age[i];
  }  
  avg = sum / length;
  
  printf("The average age is: %.2f", avg);
  
  return 0;
}