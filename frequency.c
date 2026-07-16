#include<stdio.h>
int main(){

    int count = 0;
    int t;
    scanf("%d",&t);
    int freq[101] = {0};
    int a[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    for(int i = 0; i < t; i++)
    {
        freq[a[i]]++;
    }
    printf("%d\n",freq[x]);
    
    return 0;
}