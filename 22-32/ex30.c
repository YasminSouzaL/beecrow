/*Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.*/
#include <stdio.h>
int main(){
    int i, pares = 0, impares = 0, positivos = 0, negativos = 0, valor;
    for (i = 0; i < 5; i++){
        scanf("%d", &valor);
        if (valor % 2 == 0){
            pares++;
        } else {
            impares++;
        }
        if (valor > 0){
            positivos++;
        } else if (valor < 0){
            negativos++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}