#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int c, n;

    scanf("%d %d",&c,&n);

    char key1[n+1];
    char key2[n+1];

    scanf("%s",key1);
    // printf("%s\n",key1);
    scanf("%s",key2);
    // printf("%s\n",key2);

    char s[1001];

    getchar();
    for(int i=0;i<3;i++){
        gets(s);

        int len = strlen(s);
        
        for(int j = 0;j<len;j++){
            if(s[i] == 'Z'){
                s[i] = 'P';
            }
            if(s[i] == 'E'){
                s[i] = 'O';
            }
            if(s[i] == 'N'){
                s[i] = 'L';
            }

            if(s[i] == 'I'){
                s[i] = 'A';
            }

            if(s[i] == 'T'){
                s[i] = 'R';
            }
            
        }

        printf("%s\n",s);
        
    }

    


    return 0;
}