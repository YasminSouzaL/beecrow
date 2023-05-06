/*Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.*/
#include <stdio.h>
int main(){
    int m, n, i, j, soma;
    while (1){
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0){
            break;
        }
        soma = 0;
        if (m > n){
            for (i = n; i <= m; i++){
                printf("%d ", i);
                soma += i;
            }
        } else {
            for (i = m; i <= n; i++){
                printf("%d ", i);
                soma += i;
            }
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}