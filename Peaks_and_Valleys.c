#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[105];

    for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);

    if (a[0] == a[1])
    {
        printf("0\n");
        return 0;
    }
    }
    

    int dir;

    if (a[1] > a[0]){
        dir = 1;
    }
        
    else{
        dir = -1;
    }
        

    for (int i = 2; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            printf("0\n");
            return 0;
        }

        int newdir;

        if (a[i] > a[i - 1])
            newdir = 1;
        else
            newdir = -1;

        if (newdir == dir)
        {
            printf("0\n");
            return 0;
        }

        dir = newdir;
    }

    printf("1\n");

    return 0;
}