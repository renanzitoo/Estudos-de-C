#include <stdio.h>
#include <stdlib.h>


int main(void){
    float x, x2, resultado, cont, cont2, op, sn, sn2;

    printf("Digite o primeiro numero\n");
    scanf("%f",&x);
    printf("Digite o segundo numero\n");
    scanf("%f",&x2);
    printf("Qual a operacao a ser realizada?\n");
    printf("1 para *\n");
    printf("2 para/\n");
    printf("3 para +\n");
    printf("4 para -\n");
    scanf("%f",&op);
        if(op==1){
            resultado=x*x2;
        }
         if(op==2){
            resultado=x/x2;
        }
         if(op==3){
            resultado=x+x2;
        }
         if(op==4){
            resultado=x-x2;
        }
        for(cont=1;cont<=52;cont=1){
            printf("O resultado até agora foi: %f", resultado);
            printf("Voce deseja continuar a operacao?\n");
            printf("Digite 1 para sim e 2 para nao\n");
            scanf("%f",&sn);
                if(sn==1){
                    for(cont2=1;cont2<=52;cont2=1){
                        printf("Digite o proximo numero\n");
                        scanf("%f",&x2);
                        printf("Qual a operacao a ser realizada?\n");
                        printf("1 para *\n");
                        printf("2 para/\n");
                        printf("3 para +\n");
                        printf("4 para -\n");
                        scanf("%f",&op);
                                if(op==1){
                                resultado=resultado*x2;
                                }
                                if(op==2){
                                resultado=resultado/x2;
                                }
                                if(op==3){
                                resultado=resultado+x2;
                                }
                                if(op==4){
                                resultado=resultado-x2;
                                }
                                printf("O resultado foi: %f", resultado);
                                printf("Deseja Continuar?\n");
                                printf("Digite 1 para sim e 2 para nao\n");
                                scanf("%f",&sn2);
                                if(sn2==1){
                                cont2=1;
                                }
                                if(sn2==2){
                                cont2=52;
                                cont=52;
                                }
                                
                                


                            
                         }

                }
                if(sn==2){
                cont=52;
                system('cls');
                }
    printf("O resultado final foi: %f", resultado);
    return(0);
}