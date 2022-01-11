#include <stdio.h>

int main (void){
    int c=1, op=0, pr=0;
    float tomate=2.30, cebola=1.20, cenoura=3.70, abobrinha=5.10, brocolis=1.23;
    while(c==1){
    printf("Qual a opcao voce deseja?\n");
    printf("1- Listar o nome dos produtos\n");
    printf("2- Listar o nome e os precos do produtos\n");
    printf("3- Alterar o preco do produto\n");
    printf("4- Sair\n");
    scanf("%i", &op);
    if(op==1){
        printf("1- Tomate\n");
        printf("2- Cebola\n");
        printf("3- Cenoura\n");
        printf("4- Abobrinha\n");
        printf("5- Brocolis\n");
    }
    if(op==2){
        printf("1- Tomate R$%f\n", tomate);
        printf("2- Cebola R$%f\n", cebola);
        printf("3- Cenoura R$%f\n", cenoura);
        printf("4- Abobrinha R$%f\n", abobrinha);
        printf("5- Brocolis R$%f\n", brocolis);
    }
    if(op==3){
        printf("Qual produto voce deseja alterar o preco?\n");
        scanf("%i", &pr);
            if(pr==1){
                printf("Digite o preco do tomate: \n");
                scanf("%f", &tomate);
            }
            if(pr==2){
                printf("Digite o preco da cebola: \n");
                scanf("%f", &cebola);
            }
            if(pr==3){
                printf("Digite o preco da cenoura: \n");
                scanf("%f", &cenoura);
            }
            if(pr==4){
                printf("Digite o preco da abobrinha: \n");
                scanf("%f", &abobrinha);
            }
            if(pr==5){
                printf("Digite o preco do brocolis: \n");
                scanf("%f", &brocolis);
            }
            
    }
    if(op==4){
        c=13;
    }
    else{
        printf("Numero invalido");
    }
    
}
return 0;
}