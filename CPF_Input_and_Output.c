#include<stdio.h>
int main(){

    char a[20];
    gets(a);
    printf("%c%c%c\n%c%c%c\n%c%c%c\n%c%c\n",a[0],a[1],a[2],a[4],a[5],a[6],a[8],a[9],a[10],a[12],a[13]);
    return 0;
}
