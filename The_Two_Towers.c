#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double ans = b + c;
    double ICM = (double) a / ans;

    printf("%.2lf\n",ICM);
    return 0;
}