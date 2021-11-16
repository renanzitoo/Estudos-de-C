#include <stdio.h>

int main() {
    float sal, salf, aumento;
    printf("Digite o salario do funcionario:");
    scanf("%f", &sal);

    if(sal<=200){
    aumento=13;
    salf= sal+(sal*aumento/100);
    printf("O salario do funcionario vai ser: %f", salf);
    }

    if(sal>=201 && sal<=400){
    aumento=11;
    salf= sal+(sal*aumento/100);
    printf("O salario do funcionario vai ser: %f", salf);
    }

    if(sal>=400 && sal<=800){
    aumento=9;
    salf= sal+(sal*aumento/100);
    printf("O salario do funcionario vai ser: %f", salf);
    }

    if(sal>=801){
    aumento=7;
    salf= sal+(sal*aumento/100);
    printf("O salario do funcionario vai ser: %f", salf);
    }
return 0;
}    
