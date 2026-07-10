#include <stdio.h>

int main() {
  int age[] = {12, 13, 14, 15, 16, 17, 18, 19};
   
  int i;  
  int length = sizeof(age) / sizeof(age[0]);  
  int lowestAge = age[0];

  for (i = 0; i < length; i++) {
  
    if (lowestAge > age[i]) {
    
      lowestAge = age[i];
    }
  }
 
  printf("The lowest age in the array is: %d", lowestAge);
   
  return 0;
}