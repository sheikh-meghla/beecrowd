#include<stdio.h>


int x = 1;

int fun(int 3){
    
    if (3 == 0)
    {
        return 0;
    } 
    x *= 3;
    fun(3-1); 
    
    return x;
}

int fun(int 2){
    
    if (2 == 0)
    {
        return 0;
    } 
    x *= 2;
    fun(2-1); 
    
    return x;
}

int fun(int 1){
    
    if (1 == 0)
    {
        return 0;
    } 
    x *= 1;
    fun(1-1); 
    
    return x;
}


int fun(int 0){
    
    if (1 == 0)
    {
        return 0;
    } 
   
}



int main() {

    int n;
    scanf("%d",&n);
    
    int r = fun(n);

    printf("%d",r);
   
    
    return 0;
}