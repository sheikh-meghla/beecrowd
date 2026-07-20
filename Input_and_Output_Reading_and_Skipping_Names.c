#include<stdio.h>
int main(){

    char a[100];

    int c = 1;
    
    while (fgets(a,sizeof(a),stdin) !=NULL)
    {
        c++;
        if(c==4){
            printf("%s",a);
        }

        if(c==8){
            printf("%s",a);
        }

        if(c==10) {
            printf("%s",a);
        }

    }
    
    return 0;
}



// Print the third name from the list;
// Print the seventh name from the list;
// Print the ninth name from the list