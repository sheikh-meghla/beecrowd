#include <stdio.h>

int main()
{
    int n, id;
    while(scanf("%d %d", &n, &id) != EOF)
    {
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int author_id, game;
            scanf("%d %d", &author_id, &game);

            if(author_id == id && game == 0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}