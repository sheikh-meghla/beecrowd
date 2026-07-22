#include <stdio.h>
#include <string.h>

int main()
{
    char key[50];
    if (scanf("%s", key) != 1) return 0;

    int len = strlen(key);

    int n;
    scanf("%d", &n);
    getchar();

    char s[100005];

    while (n--)
    {
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        char *word = strtok(s, " ");
        int first = 1;

        int key_idx = 0;

        while (word != NULL)
        {
            if (!first)
                printf(" ");

            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            {
                printf("%s", word);
            }
            else
            {
                for (int i = 0; word[i] != '\0'; i++)
                {
                    char ch = ((word[i] - 'a') + (key[key_idx % len] - 'a')) % 26 + 'a';
                    printf("%c", ch);
                    
                    key_idx++;
                }
            }

            first = 0;
            word = strtok(NULL, " ");
        }

        printf("\n");
    }

    return 0;
}