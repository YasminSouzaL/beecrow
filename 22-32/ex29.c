/*Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.*/
#include <stdio.h>
int main(){
    int i, pares = 0, valor;
    for (i = 0; i < 5; i++){
        scanf("%d", &valor);
        if (valor % 2 == 0){
            pares++;
        }
    }
    printf("%d valores pares\n", pares);
    return 0;
}