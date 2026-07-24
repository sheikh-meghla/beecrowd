#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char name[101], group[101];
    int h;

    int bonecos = 0;
    int arquitetos = 0;
    int musicos = 0;
    int desenhistas = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d", name, group, &h);

        if (strcmp(group, "bonecos") == 0)
        {
            bonecos += h;
        }
        else if (strcmp(group, "arquitetos") == 0)
        {
            arquitetos += h;
        }
        else if (strcmp(group, "musicos") == 0)
        {
            musicos += h;
        }
        else if (strcmp(group, "desenhistas") == 0)
        {
            desenhistas += h;
        }
    }

    int gifts = 0;

    gifts += bonecos / 8;
    gifts += arquitetos / 4;
    gifts += musicos / 6;
    gifts += desenhistas / 12;

    printf("%d\n", gifts);

    return 0;
}