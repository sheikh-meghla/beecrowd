#include<stdio.h>
int main(){

    int array[]={4,2,68,9,0,200};

    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5; j++){

            if (array[i] > array[j]) {

                int tamp = array[i];

                array[i]=array[j];

                array[j]=tamp;
            } 
        }

    }    
    
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }  

    int len = sizeof(array) / sizeof(array[0]);

    printf("\n array len = %d\n",len);

    printf("second large num =  %d",array[len-2]);

    
    
    
}