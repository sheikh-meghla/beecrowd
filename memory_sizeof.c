#include<stdio.h>
int main(){
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;

    printf("%zu\n",sizeof(myInt));
    printf("%zu\n",sizeof(myChar));
    printf("%zu\n",sizeof(myDouble));
    printf("%zu\n",sizeof(myFloat));

    return 0;
}