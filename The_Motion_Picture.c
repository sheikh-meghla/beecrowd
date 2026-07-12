#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float percentage = ((b - a) / a) * 100;
    printf("%.2f%%\n",percentage);
    return 0;
}