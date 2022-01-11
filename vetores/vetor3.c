#include <stdio.h>

int main(void){
    int val1[10], val2[10], val3[10], i=1;
    for(i=1;i<=10;i++){
        printf("Digite o primeiro valor: \n");
        scanf("%i", &val1[i]);
        printf("Digite o segundo valor: \n");
        scanf("%i", &val2[i]);

        val3[i]= val1[i] + val2[i];
        printf("A soma dos dois e : %i \n", val3[i]);
}
}