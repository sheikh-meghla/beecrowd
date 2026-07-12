#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    char choise1[10];
    char choise2[10];

    char name1[100];
    char name2[100];
    int n;
    int n1;

    while (t--) {
        scanf("%s %s %s %s %d %d", name1,choise1,name2,choise2,&n,&n1);

        int sum = n + n1;


        if (sum % 2 == 0) {
            if (strcmp(choise1, "PAR") == 0)
                printf("%s\n", name1);
            else
                printf("%s\n", name2);
        }
        else {
            if (strcmp(choise1, "IMPAR") == 0)
                printf("%s\n", name1);
            else
                printf("%s\n", name2);
        }
        
    }

    return 0;
}