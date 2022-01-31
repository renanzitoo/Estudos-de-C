#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

main(){
    int voto1, voto2, voto3, lucca, ana, duda, eduardo, nulo, branco;
    lucca=0;
    ana=0;
    duda=0;
    eduardo=0;
    nulo=0;
    branco=0;
    printf("Ola seja bem vindo ao programa de votacao de represente de sala\n");
    printf("Para quem seria seu voto?\n");
    printf("Digite 1 para Lucca\n");
    printf("Digite 2 para Ana\n");
    printf("Digite 3 para Duda\n");
    printf("Digite 4 para Eduardo\n");
    printf("Digite 0 para votar em branco\n");

    scanf("%i", &voto1);
        switch(voto1){
        case 1:
        lucca+=1;
        printf("Seu voto foi computado para o Lucca");
        break;

        case 2:
        ana+=1;
        printf("Seu voto foi computado para a Ana");
        break;
        
        case 3:
        duda+=1;
        printf("Seu voto foi computado para a Duda");
        break;

        case 4:
        eduardo+=1;
        printf("Seu voto foi computado para o Eduardo");
        break;

        case 0:
        branco+=1;
        printf("Seu voto foi em branco");
        break;

        default:
        nulo+=1;
        printf("Seu voto foi nulo");
        break;

        
        }
        sleep(2);
        system("cls");

    printf("Ola seja bem vindo ao programa de votacao de represente de sala\n");
    printf("Para quem seria seu voto?\n");
    printf("Digite 1 para Lucca\n");
    printf("Digite 2 para Ana\n");
    printf("Digite 3 para Duda\n");
    printf("Digite 4 para Eduardo\n");
    printf("Digite 0 para votar em branco\n");
    scanf("%i", &voto2);
        switch(voto2){
        case 1:
        lucca+=1;
        printf("Seu voto foi computado para o Lucca");
        break;

        case 2:
        ana+=1;
        printf("Seu voto foi computado para a Ana");
        break;
        
        case 3:
        duda+=1;
        printf("Seu voto foi computado para a Duda");
        break;

        case 4:
        eduardo+=1;
        printf("Seu voto foi computado para o Eduardo");
        break;

        case 0:
        branco+=1;
        printf("Seu voto foi em branco");
        break;

        default:
        nulo+=1;
        printf("Seu voto foi nulo");
        break;
        
        }
        sleep(2);
        system("cls");

        printf("Ola seja bem vindo ao programa de votacao de represente de sala\n");
    printf("Para quem seria seu voto?\n");
    printf("Digite 1 para Lucca\n");
    printf("Digite 2 para Ana\n");
    printf("Digite 3 para Duda\n");
    printf("Digite 4 para Eduardo\n");
    printf("Digite 0 para votar em branco\n");
    scanf("%i", &voto2);
        switch(voto2){
        case 1:
        lucca+=1;
        printf("Seu voto foi computado para o Lucca");
        break;

        case 2:
        ana+=1;
        printf("Seu voto foi computado para a Ana");
        break;
        
        case 3:
        duda+=1;
        printf("Seu voto foi computado para a Duda");
        break;

        case 4:
        eduardo+=1;
        printf("Seu voto foi computado para o Eduardo");
        break;

        case 0:
        nulo+=1;
        printf("Seu voto foi em branco");
        break;

        default:
        nulo+=1;
        printf("Seu voto foi nulo");
        break;
        
        }
        sleep(2);
        system("cls");

        printf("A votacao foi encerrada\n");
        printf("O total de votos foi: \n");
        printf("Votos para o Lucca: %i\n", lucca);
        printf("Votos para a Ana: %i\n", ana);
        printf("Votos para a Duda: %i\n", duda);
        printf("Votos para o Eduardo: %i\n", eduardo);
        printf("Votos em branco: %i\n", branco);
        printf("Votos nulos: %i\n", nulo);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");

        if(lucca>ana && lucca>duda && lucca>eduardo){
            printf("O Lucca foi o vencedor");
        }

        if(ana>lucca && ana>duda && ana>eduardo){
            printf("A Ana foi a vencedora");
        }

        if(duda>lucca && duda>ana && duda>eduardo){
            printf("A Duda foi a vencedora");
        }

        if(eduardo>lucca && eduardo>ana && eduardo>duda){
            printf("O Eduardo foi o vencedor");
        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");


}