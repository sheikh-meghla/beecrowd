#include<stdio.h>
#include<math.h>
int main(){
    

    while (1)
    {
        int a;
        scanf("%d",&a);
        int b,c;
        scanf("%d %d",&b,&c);
        if(a==0){
            break;
        }
        
        int land_area = (a * b * 100) / c;
        int x = sqrt(land_area);

        printf("%d\n",x);
        
    }
    


    return 0;
}