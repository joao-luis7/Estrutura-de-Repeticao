 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    int num, limite, multiplicador;
    printf("Qual limite da tabuada? ");
    scanf("%d", &limite);
    if(limite > 100)
        printf("\nLimite estourado. Escolha um limite ate 100.\n");
    else{
        printf("Digite um numero para realizar a tabuada: ");
        scanf("%d", &num);
        multiplicador = limite;
        for(limite = 1; limite <= multiplicador; limite++)
        printf("%d ", limite*num);}

    system("pause");
    return 0;
}