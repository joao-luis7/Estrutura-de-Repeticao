#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um Programa para calcular N! (fatorial de N), sendo que o valor inteiro
de fornecido pelo usuario. Sabe-se que: N! = 1 * 2 * 3 *... * (N-1) * N; 0! = 1, por definiï¿½ï¿½o.*/

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int n, i, fatorial = 1;

   printf("Insira um número inteiro para encontrar seu fatorial: ");
   scanf("%d", &n);
   if(n < 0){
      printf("Para um número ser fatorial, o mesmo deve ser natural.");
   }
   else{
      for (i = 1; i <= n; i++){
      fatorial = i * fatorial;
      }
      if (n == 0){
         printf("O fatorial de 0, por definição é: 0! = 1");
      }
      else{
         printf("\nO fatorial de %d é: %d! = %d\n", n, n, fatorial);
      }
   }

   system("pause");
   return 0;
}