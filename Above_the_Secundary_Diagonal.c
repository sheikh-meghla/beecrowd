#include<stdio.h>
int main(){

    float sum = 0;

    float m[12][12];

    char ch;
    scanf(" %c",&ch);

    

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
        }
    }

  
      for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if((i + j) < 11){
                sum += m[i][j];
            }
        }
    }

     
    if (ch == 'S') {
        printf("%.1f\n", sum);
    }
    else if (ch == 'M') {
        printf("%.1f\n", sum / 66.0);
    }
    

    return 0;
}