#include <stdio.h>
#include <stdlib.h>

/*apresente um menu de opções para as operações entre dois adição, subtração, multiplicação e divisão.
Possibilite ao usuário escolher a operação desejada, mostrar o resultado e voltar ao menu de opções.*/

int main()
{
    char operador;
    int opcao = 1, menu = 1;
    float num1, num2;

    while (menu != 0){
        printf("============= CALCULADORA =============\n");
        printf("(1) Fazer uma nova operacao\n(0) Encerrar o programa\nOpcao desejada: ");
        scanf("%d", &menu);
        if (menu == 1){
            printf("\nInsira um numero: ");
            scanf("%f", &num1);
            printf("Insira outro numero: ");
            scanf("%f", &num2);
            
            while (opcao != 5 && opcao != 0) {
                printf("\n\tOPERADORES\t\n");
                printf("(1) Adicao\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n(5) Voltar (Selecionar outros numeros)\n(0) Encerrar\nOPCAO DESEJADA: ");
                scanf("%d", &opcao);
                switch (opcao){
                    case 1:
                        printf("RESULTADO da Soma: %.2f", num1 + num2);
                        break;
                    case 2:
                        printf("RESULTADO da Subtracao: %.2f\n", num1 - num2);
                        break;
                    case 3:
                        printf("RESULTADO da Multiplicacao: %.2f\n", num1 * num2);
                        break;
                    case 4:
                        if (num2 == 0){
                            printf("ERRO: Divisao por zero nao permitida");
                        }
                        else{
                            printf("RESULTADO da Divisao: %.2f\n", num1 / num2);
                        }
                        break;
                    case 5:
                        menu = 1;
                        break;
                    case 0:
                        menu = 0;
                        break;
                    default:
                        printf("Opcao invalida, por favor, verifique a opcao.\n");
                        opcao = 1;
                        break;
                }
            }
        }
        else if (menu != 0) {
            printf("\n>>> OPCAO INVALIDA no menu principal! Tente novamente. <<<\n");
        }
    }

    system("pause");
    return 0;
}
