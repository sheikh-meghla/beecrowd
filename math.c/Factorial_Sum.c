#include<stdio.h>

long long int factorial1 = 1;
long long int factorial2 = 1;


long long int fun1(int a){
    if (a==0)
    {
        return 0;
    }
    factorial1 *= a;
    fun1(a-1);

    return factorial1;
}

long long int fun2(int b){
    if (b==0)
    {
        return 0;
    }
    factorial2 *= b;
    fun2(b-1);

    return factorial2;
}

int main(){
    int a,b;

    while(scanf("%d %d",&a,&b)!= EOF ) {
        long long int sum = 0;
        long long int r1;
        long long int r2;

        if (a == 0 && b == 0)
        {

            r1 = 1;
            r2 = 1;
        }
        else if (a == 0 && b > 0)
        {
            r1 = 1;
            r2  = fun2(b);


        }
        else if (a > 0 && b == 0)
        {
            r2 = 1;
            r1 = fun1(a);


        }else{
            r1 = fun1(a);
            r2  = fun2(b);
        }
        

            sum = r1 + r2;

            printf("%lld\n",sum);

            
            factorial1 = 1;
            factorial2 = 1;

    }

    return 0;
}