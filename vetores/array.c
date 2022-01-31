#include <stdio.h>

int main(void){
    int i=1, i1=1 ,imp=0 , arr[15];
    
    for (i=1;i<=15;i++){
        printf("Digite o valor %i\n", i);
        scanf("%i", &arr[i]);
        
    }
    printf("Valores pares: ");
    for(i1=1;i1<=15;i1++){
        if(arr[i1]%2==0){
            printf("%i, ",arr[i1]);
        }
        else{
            imp++;
        }
    }
    printf("\nQuantidade de valores impares: %i", imp);
}