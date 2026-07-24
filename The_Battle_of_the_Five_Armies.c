#include<stdio.h>
int main(){

    int h,e,a,o,w,x;

    scanf("%d %d %d %d %d %d",&h,&e,&a,&o,&w,&x);
    int good = h + e + a;
    int bad = o + w;
    if (good > bad)
    {
        printf("Middle-earth is safe.\n");
    }
    else if (good <= bad)
    {
        good = good + x;
        if (good > bad)
        {
            printf("Middle-earth is safe.\n");
        }
        else{
            printf("Sauron has returned.\n");
        }
        
    }
    else
    {
        printf("Sauron has returned.\n");
    }
    
    
    return 0;
}