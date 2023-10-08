/*
    Faça um programa que leia dois números
    quebrados e imprima na tela o resultado
    na tela da multiplicação deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1;
    printf("Digite o valor de num1: ");
    scanf("%f", &num1);

    float num2;
    printf("Digite o valor de num2: ");
    scanf("%f", &num2);

    float mult = num1 * num2;

    printf("O produto da multiplicação: %f x %f é igual a %f.", num1, num2, mult);

    return 0;
}
