#include <stdio.h>

int main()
{
    int h, m;

    while (scanf("%d %d", &h, &m) != EOF)
    {
        int h1 = h / 30;
        int m1 = m / 6;
        printf("%02d:%02d\n",h1 ,m1 );
    }

    return 0;
}