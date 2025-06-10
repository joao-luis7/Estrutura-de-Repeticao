#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um Programa que receba um número inteiro e verifique se o número fornecido é primo ou não.
Imprima mensagem de número primo ou número não primo. Observação: um número é primo se este é
divisível apenas pelo número um e por ele mesmo.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, i, divisores = 0;

    do{
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        if (num <= 1){
            printf("NÃO é primo\n");
        }

    } while (num <= 1);

    for (i = 1; i <= num; i++){
        if (num % i == 0){
            divisores++;
        }
    }
    if (divisores > 2){
        printf("NÃO é primo");
    }
    else{
        printf("É primo");
    }
}