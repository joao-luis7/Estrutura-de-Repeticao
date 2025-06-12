#include <stdio.h>
#include <stdlib.h>

/*Faça uma Programa que receba, como entrada, uma lista de números positivos ou negativos, e forneça
como saída, a soma dos números positivos e a soma dos números negativos. O algoritmo deve parar de
pedi valores quando for fornecido o valor zero.*/

int main(){

    int num, positivo = 0, negativo = 0;

    printf("--- Maquina de Soma de Inteiros---\nPara encerrar, digite 0.\n");
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num > 0){
            positivo = num + positivo;
        }
        else if (num < 0){
            negativo = num + negativo;
        }
        
    }
    while (num != 0);{
        printf("Programa encerrado.\n");
    }
    printf("Soma dos positivos %d\n", positivo);
    printf("Soma dos negativos %d\n", negativo);

    system("pause");
    return 0;
}