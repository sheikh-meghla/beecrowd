#include<stdio.h>
#include<string.h>
int main(){

    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        char megh[20],rafi[20];
        scanf("%s %s",megh,rafi);

        printf("Caso #%d: ", i + 1);

        if (strcmp(megh,rafi)== 0 )
        {
            printf("De novo!\n");
        }
        else if ((strcmp(megh,"pedra")==0 &&
            (strcmp(rafi,"tesoura")==0 || strcmp(rafi,"lagarto")==0)) ||
            (strcmp(megh,"papel")==0 &&
            (strcmp(rafi,"pedra")==0 || strcmp(rafi,"Spock")==0)) ||
            (strcmp(megh,"tesoura")==0 &&
            (strcmp(rafi,"papel")==0 || strcmp(rafi,"lagarto")==0)) ||
            (strcmp(megh,"lagarto")==0 &&
            (strcmp(rafi,"papel")==0 || strcmp(rafi,"Spock")==0)) ||
            (strcmp(megh,"Spock")==0 &&
            (strcmp(rafi,"pedra")==0 || strcmp(rafi,"tesoura")==0))
        )
        {
            printf("Bazinga!\n");
        }
        else{
            printf("Raj trapaceou!\n");
        }
        
        
    } 

    return 0;
}