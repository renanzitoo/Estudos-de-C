#include <stdio.h>

int main(void){
    float tomate=2.30 , cebola=1.20 , cenoura=3.70 , abobrinha=5.10 , brocolis=1.23, total=0;
    int opt2, quant, opt=0, cont, prod;

    printf("Qual operacao voce deseja realizar?\n");
    printf("Digite 1 para listar os produtos, e 2 para fazer uma compra\n");
    scanf("%d", &opt);
    if(opt==1){
        printf("O preco do tomate e %f\n", tomate);
        printf("O preco da cebola e %f\n", cebola);
        printf("O preco da cenoura e %f\n", cenoura);
        printf("O preco da abobrinha e %f\n", abobrinha);
        printf("O preco do brocolis e %f\n", brocolis);
        return(0);
    }

    if(opt==2){
        for(cont=0;cont<=200;cont=cont){
       printf("Qual produto voce deseja?\n");
       printf("1 para tomate, 2 para cebola, 3 para cenoura, 4 para abobrinha, 5 para brocolis?\n");
       scanf("%d",&prod); 
       printf("Qual a quantidade de produtos?\n");
       scanf("%d",&quant);
       if(prod=1){
       total =+ tomate*quant;
       }
       if(prod=2){
       total =+ cebola*quant;
       }
       if(prod=3){
       total =+ cenoura*quant;
       }
       if(prod=4){
       total =+ abobrinha*quant;
       }
       if(prod=5){
       total =+ brocolis*quant;
       }
       printf("Voce deseja continuar a operacao? 1 para sim 2 para nao\n");
       scanf("%d", &opt2);
       if(opt2=1){
           printf("O total da compra foi: %f\n", total);
       }

       if(opt2=2){
           return (0);
       }


    }
    }
    
}