#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    char operacao;
    float sal;
     

    printf("Digite o seu salario: \n");
    scanf("%f", &sal);
    printf("Digite o seu caso de A a C: \n");
    scanf(" %c", &operacao);
        switch( operacao ) {
            case 'a' :
            sal += (sal*0.1);
            printf("O seu salario novo vai ser de %f", sal);
            break;

            case 'b' :
            sal += (sal*0.2);
            printf("O seu salario novo vai ser de %f", sal);
            break;

            case 'c' :
            sal += (sal*0.3);
            printf("O seu salario novo vai ser de %f", sal);
            break;

            default :
            printf("Você digitou um caractere errado");
            break;



        }


        




    

}