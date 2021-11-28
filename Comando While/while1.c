#include <stdio.h>

int main(void){
    int n=0, cont=0;
    printf("Digite o valor de N\n");
    scanf("%d", &n);
    while(cont<=n){
    if(cont%2==0){
        printf("%d\n", cont);
        }
    cont++;
    }


}