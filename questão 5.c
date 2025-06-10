#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um Programa que receba um n�mero inteiro e verifique se o n�mero fornecido � primo ou n�o.
Imprima mensagem de n�mero primo ou n�mero n�o primo. Observa��o: um n�mero � primo se este �
divis�vel apenas pelo n�mero um e por ele mesmo.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, i, divisores = 0;

    do{
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        if (num <= 1){
            printf("N�O � primo\n");
        }

    } while (num <= 1);

    for (i = 1; i <= num; i++){
        if (num % i == 0){
            divisores++;
        }
    }
    if (divisores > 2){
        printf("N�O � primo");
    }
    else{
        printf("� primo");
    }
}