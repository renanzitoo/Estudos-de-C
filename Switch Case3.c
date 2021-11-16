#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
    float quant_alimento, preco;
    int cod_alimento;
    printf("Digite o código do alimento: \n");
    scanf("%d", &cod_alimento);
    printf("Digite a quantidade de alimento: \n");
    scanf("%f", &quant_alimento);

    switch (cod_alimento){
        case 100:
        preco= quant_alimento*10.20;
        printf("O preço da sua compra é: %f", preco);
        break;

        case 101:
        preco= quant_alimento*10.30;
        printf("O preço da sua compra é: %f", preco);
        break;

        case 102:
        preco= quant_alimento*10.50;
        printf("O preço da sua compra é: %f", preco);
        break;

        case 103:
        preco= quant_alimento*10.20;
        printf("O preço da sua compra é: %f", preco);
        break;

        case 104:
        preco= quant_alimento*10.30;
        printf("O preço da sua compra é: %f", preco);
        break;

        case 105:
        preco= quant_alimento*3.00;
        printf("O preço da sua compra é: %f", preco);
        break;

        default:
        printf("O codigo digitado é invalido"); 
        break;
        
        
    }

}

