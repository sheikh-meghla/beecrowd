#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int reg, ans;
    float note, max = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %f", &reg, &note);

        if (note > max)
        {
            max = note;
            ans = reg;
        }
    }

    if (max >= 8.0)
    {
       printf("%d\n", ans);
    }
       
    else{
        printf("Minimum note not reached\n");
    }
        

    return 0;
}