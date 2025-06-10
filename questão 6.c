#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int voto, A = 0, B = 0, C = 0, D = 0, NULO = 0, BRANCO = 0;
    float pnulo, pbranco, qtd_votos;

    do{
    printf("\n===============ELEIÇÃO PRESIDENCIAL===============\n");
    printf("Verifique a opção que melhor satisfaça seu voto\n");
    printf("**PARA ENCERRAR, DIGITE 0.\n");
    printf("(1) CANDIDATO A\n(2) CANDIDATO B\n(3) CANDIDATO C\n(4) CANDIDATO D\n(5) NULO\n(6) BRANCO\n");
    printf("Opção escolhida: ");
    scanf("%d", &voto);
    if (voto == 0){
        printf("Encerrando o programa...\n");
    }
    else{
        switch (voto){
        case 1:
            A++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        case 2:
            B++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        case 3:
            C++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        case 4:
            D++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        case 5:
            NULO++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        case 6:
            BRANCO++;
            printf("====VOTO CONFIRMADO====\n");
            break;
        default:
            printf("\n====Voto não reconhecido. Tente novamente.====\n");
            break;
        }
    }
        if (voto >= 1  && voto <= 6){
            qtd_votos++;
        }
        
    } while (voto != 0);

    pnulo = ((NULO/qtd_votos)*100.0);
    pbranco = ((BRANCO/qtd_votos)*100.0);
    printf("\n\n===============VOTOS CONTABILIZADOS===============\n");
    printf("Candidato A: %d VOTOS\n", A);
    printf("Candidato B: %d VOTOS\n", B);
    printf("Candidato C: %d VOTOS\n", C);
    printf("Candidato D: %d VOTOS\n", D);
    printf("NULOS: %d VOTOS\n", NULO);
    printf("PORCENTAGEM DE NULOS: %.1f%%\n", pnulo);
    printf("BRANCOS: %d VOTOS\n", BRANCO);
    printf("PORCENTAGEM DE BRANCOS: %.1f%%\n", pbranco);
    printf("===================================================\n");
    
    system("pause");
    return 0;
}