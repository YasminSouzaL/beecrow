/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” 

*/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int hi, mi, hf, mf, h, m;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    if (hi == hf && mi == mf)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (hi == hf && mi > mf){
        h = 24 - hi + hf - 1;
        m = 60 - mi + mf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi == hf && mi < mf){
        h = 24 - hi + hf;
        m = mf - mi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi > hf && mi == mf){
        h = 24 - hi + hf;
        m = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi < hf && mi == mf){
        h = hf - hi;
        m = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi > hf && mi > mf){
        h = 24 - hi + hf - 1;
        m = 60 - mi + mf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi > hf && mi < mf){
        h = 24 - hi + hf;
        m = mf - mi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi < hf && mi > mf){
        h = hf - hi - 1;
        m = 60 - mi + mf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if (hi < hf && mi < mf){
        h = hf - hi;
        m = mf - mi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    return 0;
}
