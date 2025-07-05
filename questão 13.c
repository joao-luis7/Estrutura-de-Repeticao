#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que receba 10 números, calcule e imprima a soma dos números pares e a soma dos
números primos.*/

int main(){
    int num, count, pares = 0, primos = 0, i, divisores;

    for (count = 0; count < 10; count++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if (num % 2 == 0){
            pares = pares + num;
        }
        if(num > 1){
            divisores = 0; //zerar o contador antes de cada iteração 
            for(i = 1; i <= num; i++){
                if(num % i == 0){
                    divisores++;
                }
            }
            if(divisores==2){
                primos = primos+num;
            }
        }
    }
    
    
    printf("\n--------------------------\nsoma dos pares: %d\n", pares);
    printf("soma dos primos: %d\n--------------------------\n", primos);
    
}