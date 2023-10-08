/*
    Faça um programa que mostre o resultado da divisão
    entre dois números quebrados, e mostre apenas 2 casas
    após a virfula.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1 = 2.8;
    float num2 = 1.4;

    float div = num1 / num2;

    printf("A divisão de numerador %.2f e denominador %.2f é o quociente %.2f.", num1, num2, div);

    return 0;
}
