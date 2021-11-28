#include <stdio.h>

int main (void){
    int val=0, soma=0;
    
    while(val>=0){
    printf("Digite o valor a ser somado\n");
    scanf("%d", &val);
    if(val>=0){
    soma=soma+val;
    }
    }
    printf("O valor final foi %d", soma);

}