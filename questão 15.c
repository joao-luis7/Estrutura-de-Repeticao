#include <stdio.h>
#include <stdlib.h>

int main()
{

    int total_times, total_jogadores, idade1 = 0, count = 0, count1=0;
    float peso1 = 0, total_peso1 = 0, total_idade1 = 0, geral_idade = 0, geral_peso = 0;

    for (total_times = 0; total_times < 40; total_times++)
    {
        count++;
        printf("\n========== ESTATISTICA DO TIME %d ==========\n", count);
        for (total_jogadores = 0; total_jogadores < 23; total_jogadores++){
            count1++;
            printf("\nIDADE DO JOGADOR %d: ", count1);
            scanf("%d", &idade1);
            printf("PESO DO JOGADOR %d: ", count1);
            scanf("%f", &peso1);
            total_idade1 = idade1 + total_idade1; //contagem de idade do time
            total_peso1 = peso1 + total_peso1; //contagem do peso do time
        }
        geral_idade = total_idade1 + geral_idade; //pegar todas as idades do time de 23 jogadores
        geral_peso = total_peso1 + geral_peso; // pegar todos os pesos de um time
        printf("\n========== ESTATISTICA DOS JOGADORES ==========\n");
        printf("\nIDADE MEDIA DO TIME %d: %.1f anos\n", count, total_idade1 / 23);
        printf("PESO MEDIO DO TIME %d: %2.f kg\n", count, total_peso1 / 23);
        total_idade1 = 0; //flag p zerar total da idade, pra poder colocar do
        total_peso1 = 0; // os dados do outro time
        count1 = 0; // flag pra zerar contador 
    }
    printf("\n========== ESTATISTICA DO CAMPEONATO ==========\n");
    printf("\nIDADE MEDIA DE TODOS OS PARTICIPANTES: %.1f anos\n", geral_idade / 920);
    printf("PESO MEDIO DE TODOS OS JOGADORES: %.2f kg\n", geral_peso / 920);

    system("pause");
    return 0;
}
