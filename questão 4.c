#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Receba um conjunto de valores inteiros e positivos, calcule e imprima o maior
e o menor valor do conjunto. Para encerrar a entrada de dados, deve ser digitado
o valor zero. Para valores negativos, deve ser enviada uma mensagem. 
Esses valores (negativos) não entrarão nos cálculos.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, maior = -2147483647, menor = 2147483647; //valores definidos para que seja recebido o primeiro valor possivel de cada variavel.

    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &num);
        if (num > 0){
            if (num < menor && num != 0){ //ele deve ser menor que o menor (que é o maior número possivel) daí, temos o primeiro valor para o menor número
                menor = num;
            }
            else if(num > maior){
                maior = num;
            }
        }
        else if (num < 0){
            printf("Valores negativos não entrarão no cálculo.\n");
        }
        
    }while (num != 0);{
        printf("\nPrograma encerrado.\n");}
    
    printf("Maior número do conjunto: %d\n", maior);
    printf("Menor número do conjunto: %d\n\n", menor);
}
