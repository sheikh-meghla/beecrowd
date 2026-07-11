#include<stdio.h>
int main(){

    double counter = 0.0;
    double sum = 0.0;

    double m[12][12];

    char ch;
    scanf(" %c",&ch);

    

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

  
      for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i > j && (i+j)> 11 ){
                sum += m[i][j];
                counter++;
            }
        }
    }

     
    if (ch == 'S') {
        printf("%.1lf\n", sum);
    }
    else if (ch == 'M') {

        printf("%.1lf\n", sum / counter);
    }
    

    return 0;
}