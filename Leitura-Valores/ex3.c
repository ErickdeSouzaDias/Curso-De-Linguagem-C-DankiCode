/*
    Faça um programa que leia duas letras e imprima elas
    na tela, uma ao lado da outra:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char let1;
    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &let1);
    __fpurge(stdin);

    char let2;
    printf("Digite outra letra do alfabeto: ");
    scanf("%c", &let2);
    __fpurge(stdin);

    printf("As letra digitadas foram '%c' e '%c.'", let1, let2);

    return 0;
}
