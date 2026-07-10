#include<stdio.h>
int main(){
    int num = 45;
    int *ptr = &num;
    
  printf("num = %d\n", num);
  printf("*ptr = %d\n", *ptr);
  
  return 0;
}