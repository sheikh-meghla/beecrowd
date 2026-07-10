#include<stdio.h>
int main(){
    char name[150];

    for (int i = 0;i<10;i++){
        scanf("%c",&name[i]);
    }

    for(int i= 0;i<10;i++){
        printf("%c",name[i]);
    }
    return 0;
}