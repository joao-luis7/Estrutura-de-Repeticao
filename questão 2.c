#include <stdio.h>
#include <stdlib.h>

/*Escreva um Programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de pessoas
maiores de idade (idade &gt;= 18 anos).*/

int main(){
    int idade, qnt_pessoas, maiores;

    for(qnt_pessoas = 1; qnt_pessoas <= 10; qnt_pessoas++){
        printf("Digite a idade da pessoa %d: ", qnt_pessoas);
        scanf("%d", &idade);

        if (idade >= 18){
            maiores++;
        }
        else{}
        
    }

    printf("\n%d Pessoas sao maiores de idade.\n\n", maiores);

    system("pause");
    return 0;
}