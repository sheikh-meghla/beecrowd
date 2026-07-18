#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int C, N;

    while (scanf("%d %d%*c", &C, &N) == 2)
    {
        char key1[30], key2[30];

        fgets(key1, sizeof(key1), stdin);
        fgets(key2, sizeof(key2), stdin);

        key1[strcspn(key1, "\n")] = '\0';
        key2[strcspn(key2, "\n")] = '\0';

        char mp[256];

        // Initialize the mapping array to itself
        for (int i = 0; i < 256; i++)
            mp[i] = i;

        for (int i = 0; i < C; i++)
            {
            unsigned char a = key1[i];
            unsigned char b = key2[i];

            if (isalpha(a) && isalpha(b))
            {
                mp[tolower(a)] = tolower(b);
                mp[toupper(a)] = toupper(b);
                mp[tolower(b)] = tolower(a);
                mp[toupper(b)] = toupper(a);
            }
            else if (isalpha(a))
            {
                // Both cases of 'a' map to the non-letter 'b'
                mp[tolower(a)] = b;
                mp[toupper(a)] = b;
                // The non-letter 'b' maps to the lowercase of 'a'
                mp[b] = tolower(a);
            }
            else if (isalpha(b))
            {
                // Both cases of 'b' map to the non-letter 'a'
                mp[tolower(b)] = a;
                mp[toupper(b)] = a;
                // The non-letter 'a' maps to the lowercase of 'b'
                mp[a] = tolower(b);
            }
            else
            {
                // Both are non-letters
                mp[a] = b;
                mp[b] = a;
            }
        }

        char s[1005];

        while (N--)
        {
            fgets(s, sizeof(s), stdin);

            for (int i = 0; s[i]; i++)
                s[i] = mp[(unsigned char)s[i]];

            printf("%s", s);
        }

        printf("\n");
    }

    return 0;
}