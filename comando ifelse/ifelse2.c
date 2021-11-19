#include <stdio.h>

int main() {
    float nota;
    printf("Digite a quantidade de acertos do aluno:\n");
    scanf("%f", &nota);

    if(nota>=0 && nota<49){
    printf("Sua nota foi D\n");
    }

    if(nota>=50 && nota<69){
    printf("Sua nota foi C\n");
    }

    if(nota>=70 && nota<89){
    printf("Sua nota foi B\n");
    }

    if(nota>=90 && nota<100){
    printf("Sua nota foi A\n");
    }
    return 0;
} 