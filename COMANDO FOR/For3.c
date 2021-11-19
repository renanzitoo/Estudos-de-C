#include <stdio.h>

float idade,maior=0, menor=0;
int cont;

main(){
for(cont=1;cont<=10;cont++){
    printf("Digite a idade: \n");
    scanf("%f",&idade);
    if (idade>=18){
        maior=maior+1;
    }
    else{
        menor=menor+1;
    }
    idade=0;

}

printf("A quantidade de maiores de idade e : %f\n", maior);
printf("A quantidade de menores de idade e : %f\n", menor);

}
