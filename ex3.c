/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

MaiorAB = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,maiorab,maiortotal;
    scanf("%d %d %d",&a,&b,&c);
    maiorab=(a+b+abs(a-b))/2;
    maiortotal= (maiorab+c+abs(maiorab-c))/2; 
    printf("%d eh maior",maiortotal);
    return 0;
}

