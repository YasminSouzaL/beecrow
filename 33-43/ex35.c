/*Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.*/
// Path: 33-43\ex36.c
#include <stdio.h>
int main(){
    int n, x, y, i, j, soma;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        soma = 0;
        if (x > y){
            for (j = y + 1; j < x; j++){
                if (j % 2 != 0){
                    soma += j;
                }
            }
        } else {
            for (j = x + 1; j < y; j++){
                if (j % 2 != 0){
                    soma += j;
                }
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}