#include <stdio.h>

int main() {
    int i;

    int n = 37;

    for (i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("|");

        for (int j = 0; j < n; j++) {


            if(i==0 && j==8){
               printf("Roberto");
               n = 31; 
            }
            else if(i==2 && j==8){
               printf("5786");
               n = 34; 
            }
            else if(i==4 && j==8){
               printf("UNIFEI");
               n = 32; 
            }
            else{
                printf(" ");

            }
        }
        n = 37;
        printf("|\n");
    }

    for (i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");

    return 0;
}