/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
Obs: Utilize ponto (.) para separar a parte decimal.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float valor;
    int n100,n50,n20,n10,n5,n2;
    int m1,m50,m25,m10,m5,m01;
    scanf("%f",&valor);
    n100=valor/100;
    n50=(valor%100)/50;
    n20=((valor%100)%50)/20;
    n10=(((valor%100)%50)%20)/10;
    n5=((((valor%100)%50)%20)%10)/5;
    n2=(((((valor%100)%50)%20)%10)%5)/2;
    m1=((((((valor%100)%50)%20)%10)%5)%2)/1;
    m50=(((((((valor%100)%50)%20)%10)%5)%2)%1)/0.5;
    m25=((((((((valor%100)%50)%20)%10)%5)%2)%1)%0.5)/0.25;
    m10=(((((((((valor%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)/0.1;
    m5=((((((((((valor%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)%0.1)/0.05;
    m01=(((((((((((valor%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)%0.1)%0.05)/0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m50);
    printf("%d moeda(s) de R$ 0.25\n",m25);
    printf("%d moeda(s) de R$ 0.10\n",m10);
    printf("%d moeda(s) de R$ 0.05\n",m5);
    printf("%d moeda(s) de R$ 0.01\n",m01);
    return 0;
}