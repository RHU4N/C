//1. Crie um programa que troca os valores de duas variaveis usando ponteiros
#include <stdio.h>

int main(){
    int h;
    int x = 10;
    int y = 15;

    int *b = &y;
    int *a = &x;

    h = *b;
    y = *a;
    x = h;

    printf("Valor de x é: %d \n", x);
    printf("Valor de y é: %d \n", y);

    return 0;


}