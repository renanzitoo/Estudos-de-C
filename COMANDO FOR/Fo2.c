    #include <stdio.h>

    main(){
        float valorcompra, desconto;
        int cliente;

        for(cliente=1;cliente<=15;cliente++){
        printf("Digite o valor da compra \n");
        scanf("%f",&valorcompra);
        if(valorcompra<=1000){
            desconto=valorcompra*0.1;
            printf("O seu desconto é de :%f\n", desconto);
        }
        else{
            desconto=valorcompra*0.15;
            printf("O seu desconto é de :%f\n", desconto);
        }

        }


    }