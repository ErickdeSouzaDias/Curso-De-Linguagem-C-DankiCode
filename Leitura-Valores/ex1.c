/*
    Faça um programa que leia dois números inteiros
    e imprima na tela o resultado da divisão deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Digite o valor de num1: ");
    int num1;
    scanf("%d", &num1);

    printf("Digite o valor de num2: ");
    int num2;
    scanf("%d", &num2);

    float div = num1 / num2;

    printf("A divisão %d por %d é igual a %.2f.", num1, num2, div);

    return 0;
}
