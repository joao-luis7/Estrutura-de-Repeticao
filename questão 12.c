#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo, resposta;
    int qtd_pessoas, rsp_sim = 0, rsp_nao = 0, mulheres_sim = 0, qtd_homens = 0;
    int homens_nao = 0, count = 1;
    float phomens_nao;

    for (qtd_pessoas = 0; qtd_pessoas < 5; qtd_pessoas++){
        printf("Digite o sexo da pessoa %d: ", count);
        scanf("  %c", &sexo);
        
        while (sexo != 'M' && sexo != 'm' && sexo != 'f' && sexo != 'F'){
            printf("Sexo Invalido. Tente 'M' para masculino ou 'F' para feminino.\nDigite sexo: ");
            scanf("  %c", &sexo);
        }
        if (sexo == 'M' || sexo == 'm'){
            qtd_homens++;
        }
        
        printf("Voce gostou do novo produto? ('S' para sim ou 'N' para nao) ");
        scanf("  %c", &resposta);

        while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
            printf("Erro na resposta. Utilize ('S' para sim ou 'N' para nao).\nTente Digite novamnte: ");
            scanf("  %c", &resposta);
        }
        count++;
        if (resposta == 'S' || resposta == 's'){
            rsp_sim++;
        }
        else
            rsp_nao++;
        if (sexo == 'F' || sexo == 'f'){
            if (resposta == 'S' || resposta == 's'){
                mulheres_sim++;
            }
            
        }
        if (sexo == 'M' || sexo == 'm'){
            if (resposta == 'N' || resposta == 'n')
                homens_nao++;
        }   
    }
    phomens_nao = ((homens_nao / (float)qtd_homens)*100.0);

    printf("Numero de pessoas que responderam 'sim': %d\n", rsp_sim);
    printf("Numero de pessoas que responderam 'nao': %d\n", rsp_nao);
    printf("Numero de *mulheres* que responderam 'sim': %d\n", mulheres_sim);
    printf("Porcentagem de *homens* que responderam 'nao' entre todos os homens analisados: %.2f\n", phomens_nao);

    system("Pause");
    return 0;
}