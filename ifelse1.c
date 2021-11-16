#include <stdio.h>

int main() {
    float vcom, desc, prec;
    printf("Digite o valor da compra:\n");
    scanf("%f", & vcom);

    if (vcom<=1000){
    desc=10;
    prec= vcom - (vcom * desc / 100);
    printf("O valor da sua compra vai ser de %f", prec);
    }

    else if(vcom>=1001 && vcom<5000){
    desc=20;
    prec= vcom - (vcom * desc / 100);
    printf("O valor da sua compra vai ser de %f", prec);
    }

    else if(vcom>=5001){
    desc=30;
    prec= vcom - (vcom * desc / 100);
    printf("O valor da sua compra vai ser de %f", prec);
    }  

return 0;

}