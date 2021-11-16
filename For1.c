#include <stdio.h>

main(){
    float preco, soma=0, media;
    int rep;

    for(rep=1;rep<=20;rep++){
    printf("Digite o preço do produto\n");
    scanf("%f",&preco);
    soma=soma+preco;
    }
    media=soma/20;
    printf("A média dos produtos é: %f",media);
    
    return (0);
}