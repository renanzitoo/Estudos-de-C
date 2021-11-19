#include <stdio.h>

int main(void) {
float maioraltura, menoraltura=100, altura;
int cont, sexo;
for(cont=1;cont<=10;cont++){
  printf("Digite a altura em cm: \n");
  scanf("%f",&altura);
  printf("Digite o sexo, 1 para feminino, 2 para masculino: \n ");
  scanf("%i",&sexo);
  


        if (altura > maioraltura) 
          maioraltura = altura;
                         
        if (altura < menoraltura) 
          menoraltura = altura;
          
}


  printf("Maior altura da turma = %f\n", maioraltura);
  printf("Menor altura da turma = %f\n", menoraltura);     

}    
