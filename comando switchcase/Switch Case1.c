#include <stdio.h>
#include <locale.h>

main(){
    float val, custo;
    int dest;
    printf("Digite o valor do transporte: \n");
    scanf("%f", & val);
    printf("Escolha o destino de 1 a 4: \n");
    scanf("%d", & dest);

    switch (dest){
        case 1:
        custo= val*0.5;
        printf("O valor do transporte vai ser %f", custo) ;
        break;
      

        case 2:
        custo= val*0.3;
        printf("O valor do transporte vai ser %f", custo);
        break;

        case 3 :
        custo= val*0.8;
        printf("O valor do transporte vai ser %f", custo);
        break;

        case 4 :
        custo= val*1.5;
        printf("O valor do transporte vai ser %f", custo);
        break;

        default :
        printf("O valor digitado é invalido");
        break;

    }
    return 0;

    


}