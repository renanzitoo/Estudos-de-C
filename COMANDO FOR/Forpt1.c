#include <stdio.h>

int main(void){
    int x;
    float idade, idade1=0, idade2=0, idade3=0, idade4=0, idade5=0;
    for(x=1;x<=15;x++){
        printf("Digite a idade: \n");
        scanf("%f", &idade);
         if(idade<15){
            idade1= idade1+1;
         }
         if(idade>=16 && idade<=30){
            idade2=idade2+1;
         }
         if(idade>=31 && idade<=45){
            idade3=idade3+1;
         }
         if(idade>=46 && idade<=60){
            idade4=idade4+1;
         }
         if(idade>=61){
            idade5=idade5+1;
         }
    }
    printf("Pessoas com idade ate 15 anos: %f\n", idade1);
    printf("Pessoas com idade de 16 ate 30 anos: %f\n", idade2);
    printf("Pessoas com idade de 31 ate 45 anos: %f\n", idade3);
    printf("Pessoas com idade de 46 ate 60 anos: %f\n", idade4);
    printf("Pessoas com idade acima de 61 anos: %f\n", idade5);

}