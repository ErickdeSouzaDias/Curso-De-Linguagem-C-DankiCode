/*
    Faça um programa que mostre o resultado da multiplicação entre dois
    números quebrados.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1 = 3.25;
    float num2 = 6.73;

    float mult = num1 * num2;

    printf("O produto de: %.2f x %.2f = %f.", num1, num2, mult);

    return 0;
}
