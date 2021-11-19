#include <stdio.h>

int main(void){
    int cont, cont2, n;

    printf("Digite o valor de N:");
    scanf("%d",&n);

        for(cont=1;cont<=n;cont++){
            for(cont2=1;cont2<=cont;cont2++){
                printf("X");
            }
            printf("\n");
        }
}