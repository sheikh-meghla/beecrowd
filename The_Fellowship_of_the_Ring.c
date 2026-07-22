#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    int Anao = 0, Elfo = 0, Humano = 0, Mago = 0, Hobbit = 0;
    while (t--)
    {
        char name[101], jati;
        scanf("%s %c", name, &jati);

        if (jati == 'A')
        {
            Anao++;
        }
        else if (jati == 'E')
        {
            Elfo++;
        }
        else if (jati == 'H')
        {
            Humano++;
        }
        else if (jati == 'M')
        {
            Mago++;
        }
        else if (jati == 'X')
        {
            Hobbit++;
        }
    }
    printf("%d Hobbit(s)\n", Hobbit);
    printf("%d Humano(s)\n", Humano);
    printf("%d Elfo(s)\n", Elfo);
    printf("%d Anao(oes)\n", Anao);
    printf("%d Mago(s)\n", Mago);

    
    return 0;
}