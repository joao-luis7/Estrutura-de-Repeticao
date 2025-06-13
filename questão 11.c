#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, nota, qtd_otimo = 0, idade_otimo = 0, qtd_regular = 0, qtd_bom = 0, qtd_pessoas, cliente_valido = 0;
    float midade = 0, porcentagem_bom, count = 1;

    printf("================= FEEDBACK DO FILME =================\n");
    printf("Nota 1: Regular\t\tNota 2: Bom\tNota 3: Otimo\n\n\n");
    for (qtd_pessoas = 0; qtd_pessoas < 5; qtd_pessoas++){
        printf("Idade do cliente %.0f: ", count);
        scanf("%d", &idade);
        while(idade < 0 || idade > 100){
            printf("Idade invalida. Tente novamente.\n");
            printf("Idade do cliente %.0f: ", count);
            scanf("%d", &idade);
        }
        if (idade > 0 && idade < 100) {
            printf("Nota dada pelo cliente %.0f: ", count);
            scanf("%d", &nota);
            while(nota > 3 || nota < 1){
                printf("Nota invalida. Tente novamente. (Nota 1: Regular, Nota 2: Bom, Nota 3: Otimo)\n");
                printf("Nota dada pelo cliente %.0f: ", count);
                scanf("%d", &nota);
            }
            if (nota >= 1 && nota <= 3){
                if (nota == 3)
                {
                    qtd_otimo++;
                    idade_otimo = idade + idade_otimo;
                }
                if (nota == 1)
                {
                    qtd_regular++;
                }
                if (nota == 2)
                {
                    qtd_bom++;
                }
                cliente_valido++;
            }
            count++;
        }
    }
    if(qtd_otimo>0){
        midade = (idade_otimo / qtd_otimo);}
    else
        midade = 0;
    porcentagem_bom = ((qtd_bom / (float)cliente_valido) * 100.0);

    printf("Media de IDADE das pessoas que responderam 'otimo' (nota 3): %.1f anos\n", midade);
    printf("Quantidade de pessoas que responderam 'regular' (nota 1): %d pessoas\n", qtd_regular);
    printf("Porcentagem das pessoas que responderam 'bom' em relacao ao total de espectadores: %.2f%%\n\n", porcentagem_bom);

    system("pause");
    return 0;
}