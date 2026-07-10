#include<stdio.h>
#include<stdbool.h>

int main(){
    int num[] = {1,3,4,5,6,7};
    int input;

    scanf("%d",&input);

    bool flag = false;

    int kuath_ase;

    for (int i = 0; i < 6; i++)
    {
        if(input==num[i]){
            kuath_ase = i;
            flag=1;
            break;
        }        

    }

    if (flag == false){
        printf("nai");
    }

    if(flag == true) {
        printf("%d ase %d tomo index a",input,kuath_ase);
    }

    
    
}