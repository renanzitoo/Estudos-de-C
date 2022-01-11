#include <stdio.h>
main(void){
   int cont, soma=0;
   cont = 6;
   while(cont>0){
       soma = soma + cont;
       cont--;
   }
   printf("soma=%d\n", soma);
   
}