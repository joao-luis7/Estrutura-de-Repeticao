#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade, qtd_pessoas, q1a10_=0, q11a20_=0, q21a30_=0, qmaisde30_=0, count=1;
    float peso, p1a10_=0, p11a20_=0, p21a30_=0, pmaisde30_=0;
    float m1a10_, m11a20_, m21a30_, mmaisde30_;

    for (qtd_pessoas = 0; qtd_pessoas < 15; qtd_pessoas++){
        printf("Idade da pessoa %d: ", count);
        scanf("%d", &idade);
        printf("Peso (em Kg) da pessoa %d: ", count);
        scanf("%f", &peso);

        if(idade>=1){
            switch (idade){
            case 1 ... 10:
                q1a10_++;
                p1a10_ = peso + p1a10_;
                break;
            case 11 ... 20:
                q11a20_++;
                p11a20_ = peso + p11a20_;
                break;
            case 21 ... 30:
                q21a30_++;
                p21a30_ = peso + p21a30_;
                break;
            default:
                qmaisde30_++;
                pmaisde30_ = peso + pmaisde30_;
                break;
            }
            count++;
        }
        while (idade <= 0){
            printf("Idade inválida.\nTente novamente.\n");
            printf("Idade da pessoa %d: ", count);
            scanf("%d", &idade);}
    }
    if (q1a10_>0)
        m1a10_ = (p1a10_/q1a10_);
    else
        m1a10_ = 0;
    if (q11a20_ > 0 )
        m11a20_ = (p11a20_/q11a20_);
    else
        m11a20_ = 0;
    if (q21a30_ > 0)
        m21a30_ = (p21a30_/q21a30_);
    else
        m21a30_ = 0;
    if (qmaisde30_ > 0)
        mmaisde30_ = (pmaisde30_/qmaisde30_);
    else
        mmaisde30_ = 0;

    printf("Media dos pesos das pessoas que tem entre 1 a 10 anos: %.2f\n", m1a10_);
    printf("Media dos pesos das pessoas que tem entre 11 a 20 anos: %.2f\n", m11a20_);
    printf("Media dos pesos das pessoas que tem entre 21 a 30: %.2f\n", m21a30_);
    printf("Media dos pesosas das pessoas que tem mais de 30 anos %.2f\n", mmaisde30_);

    system("pause");
    return 0;
}