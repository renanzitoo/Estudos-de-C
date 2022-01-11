#include <stdio.h>

int main(void){
    int num[15], i=1, numenor=1000000, quantnum=0;
    for(i=1;i<=15;i++){
    
        printf("Digite o numero: \n" );
        scanf("%i", &num[i]);
        if(num[i]<numenor){
            numenor=num[i];
        }

        if(num[i]==numenor){
            quantnum=+1;
        }
        
    }
    printf("O numero menor foi %d \n", numenor );
    printf("quantidade de vezes digitada foi %d\n", quantnum);
}