/*
sort simples
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int a, b, c, aux;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c){
        aux = b;
        b = c;
        c = aux;
    }
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, a, b, c);
    return 0;
}