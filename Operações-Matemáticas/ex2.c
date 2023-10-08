/*
    Faça um programa que mostra o resultado da divisão entre dois números inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 8;
    int num2 = 4;

    float div = num1 / num2;

    printf("A divisão entre %d e %d é igual a %.2f", num1, num2, div);

    return 0;
}
