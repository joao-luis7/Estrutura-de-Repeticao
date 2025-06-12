#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qtd_pessoas, mulheres = 0, homens = 0, count = 1, pessoa_menor, pessoa_maior;
    char sexo;
    float altura, maior = 0, menor = 0, altura_fem = 0, media_fem;

    for (qtd_pessoas = 0; qtd_pessoas < 15; qtd_pessoas++)
    {
        printf("Digite a altura (em metros) da pessoa %d: ", count);
        scanf("%f", &altura);
        if (altura > 0.5 && altura < 2.5)
        {
            if (maior == 0 && menor == 0)
            {
                maior = altura;
                menor = altura;
            }
            if (altura >= maior)
            {
                maior = altura;
                pessoa_maior = count;
            }
            else if (altura <= menor)
            {
                menor = altura;
                pessoa_menor = count;
            }
        }
        while (altura < 0 || altura > 3)
        {
            printf("Altura inválida. Tente novamente.\n");
            printf("A altura deve ser em metros. Digite aqui: ");
            scanf("%f", &altura);
        }
        printf("Sexo (M ou F) da pessoa %d: ", count);
        scanf("   %c", &sexo);
        if (sexo == 'F' || sexo == 'f')
        {
            mulheres++;
            altura_fem = altura + altura_fem;
        }
        else if (sexo == 'M' || sexo == 'm')
        {
            homens++;
        }
        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f')
        {
            printf("Sexo Inválido. Digite 'M' para masculino ou 'F' para feminino: ");
            scanf("  %c", &sexo);
        }
        media_fem = altura_fem / mulheres;
        count++;
    }
    printf("Maior altura do grupo é da pessoa %d: %.2f\n", pessoa_maior, maior);
    printf("Menor altura do grupo é da pessoa %d: %.2f\n", pessoa_menor, menor);
    printf("Número de homens totais do grupo: %d\n", homens);
    if (media_fem > 0)
    {
        printf("Média de altura das mulheres: %.2f\n", media_fem);
    }
    else
    {
        printf("O grupo não contém mulheres.\n");
    }

    system("pause");
    return 0;
}