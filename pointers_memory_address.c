#include<stdio.h>
int main(){
    int age = 10;
    int* p = &age;
    printf("%d\n",age);
    printf("%p\n",&p);
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;
}