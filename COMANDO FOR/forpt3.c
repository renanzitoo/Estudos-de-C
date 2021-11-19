#include <stdio.h>

int main(void){
    int x=0, n=0, x2=0, cont;
    printf("Digite o valor de x\n");
    scanf("%d",&x);
    x2=x;
    printf("Digite o valor de n\n");
    scanf("%d",&n);
        for(cont=2;cont<=n;cont++){
            x2=x2*x;
        }
            printf("O valor de x é: %d", x2);
            

    
}