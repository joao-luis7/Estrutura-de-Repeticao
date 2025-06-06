#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade, qtd_pessoas, _1a15_ = 0, _16a30_ = 0, _31a45_ = 0, _46a60_ = 0, maisde61 = 0;
    float p1a15, p16a30, p31a45, p46a60, pmaisde61;

    for(qtd_pessoas = 1; qtd_pessoas <= 15; qtd_pessoas++){
        printf("Digite a idade da pessoa %d: ", qtd_pessoas);
        scanf("%d", &idade);
        if (idade > 0){
            switch (idade){
            case 1 ... 15:
                _1a15_++;
                break;
            case 16 ... 30:
                _16a30_++;
                break;
            case 31 ... 45:
                _31a45_++;
                break;
            case 46 ... 60:
                _46a60_++;
                break;
            default:
                maisde61++;
                break;
        }
        }
        else{
            printf("Idade Inválida.");
        }
    }

    p1a15 = (float)((_1a15_/15.0)*100.0);
    p16a30 = (float)((_16a30_/15.0)*100.0);
    p31a45 = (float)((_31a45_/15.0)*100.0);
    p46a60 = (float)((_46a60_/15.0)*100.0);
    pmaisde61 = (float)((maisde61/15.0)*100.0);

    printf("\n\nQuantidade de pessoas de 1 a 15 anos: %d - Porcentagem: %.1f%%\n", _1a15_, p1a15);
    printf("Quantidade de pessoas de 16 a 30 anos: %d - Porcentagem: %.1f%%\n", _16a30_, p16a30);
    printf("Quantidade de pessoas de 31 a 45 anos: %d - Porcentagem: %.1f%%\n", _31a45_, p31a45);
    printf("Quantidade de pessoas de 46 a 60 anos: %d - Porcentagem: %.1f%%\n", _46a60_, p46a60);
    printf("Quantidade de pessoas com 61 ou masis anos: %d - Porcentagem: %.1f%%\n\n", maisde61, pmaisde61);    

    system("pause");
    return 0;
}