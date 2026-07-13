#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char p1[10], p2[10];

        scanf("%s", p1);
        scanf("%s", p2);

        if (strcmp(p1, "ataque") == 0 && strcmp(p2, "ataque") == 0){
            printf("Aniquilacao mutua\n");
        }
            

        else if (strcmp(p1, "pedra") == 0 && strcmp(p2, "pedra") == 0)
        {
            printf("Sem ganhador\n");
        }    

        else if (strcmp(p1, "papel") == 0 && strcmp(p2, "papel") == 0)
        {
            printf("Ambos venceram\n");
        }    

        else if (strcmp(p1, "ataque") == 0)
        {
            printf("Jogador 1 venceu\n");
        }

        else if (strcmp(p2, "ataque") == 0)
        {
            printf("Jogador 2 venceu\n");
        }

        else if (strcmp(p1, "pedra") == 0)
        {
            printf("Jogador 1 venceu\n");
        }

        else
        {
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}