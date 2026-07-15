#include<stdio.h>
int main(){

    int s_sum = 0,ss_sum = 0,b_sum = 0,sb_sum = 0, a_sum = 0,sa_sum = 0;
    float s_percentage, b_percentage, a_percentage ;
    int t;
    scanf("%d",&t);

    while (t--)
    {
    char name[100];
    scanf("%s",name);
    int s,b,a;
    scanf("%d %d %d",&s,&b,&a);
    int ss,sb,sa;
    scanf("%d %d %d",&ss,&sb,&sa);

        s_sum = s_sum + s;
        ss_sum = ss_sum + ss;
        b_sum = b_sum + b;
        sb_sum = sb_sum + sb;
        a_sum = a_sum + a;
        sa_sum = sa_sum + sa;
 
    
    }

    s_percentage = (float)ss_sum*100/s_sum;
    b_percentage = (float)sb_sum*100/b_sum;
    a_percentage = (float)sa_sum*100/a_sum;

    printf("Pontos de Saque: %.2f %%.\n",s_percentage);
    printf("Pontos de Bloqueio: %.2f %%.\n",b_percentage);
    printf("Pontos de Ataque: %.2f %%.\n",a_percentage);   

    
    return 0;
}