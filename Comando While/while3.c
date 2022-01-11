#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cod_cidade=0, cod_cidademaior=0, cod_cidademenor=0, veic_passeio=0, acidente=0, c=1, maioracidente=0, menoracidente=1000, soma_veic=0, soma_acidentes=0;
    while(c<=5){
        printf("Digite o codigo da cidade: \n");
        scanf("%d", &cod_cidade);
        printf("Digite a quantidade de veiculos de passeio: \n");
        scanf("%d", &veic_passeio);
        printf("Digite a quantidade de acidentes de transito com vitimas: \n");
        scanf("%d", &acidente);

        if(acidente>maioracidente){
            maioracidente=acidente;
            cod_cidademaior=cod_cidade;
        }

        if(acidente<menoracidente){
            menoracidente=acidente;
            cod_cidademenor=cod_cidade;
        }

    soma_veic= soma_veic+veic_passeio;
    soma_acidentes = acidente+ soma_acidentes;
    c++;

    }
    soma_veic=soma_veic/5;
    soma_acidentes=soma_acidentes/5;
    printf("O maior numero de acidentes foi: %d na cidade %d\n", maioracidente, cod_cidademaior);
    printf("O menor numero de acidentes foi: %d na cidade %d\n", menoracidente, cod_cidademenor);
    printf("A media de veiculos foi : %d\n", soma_veic);
    printf("A media de acidentes foi: %d\n", soma_acidentes);
}