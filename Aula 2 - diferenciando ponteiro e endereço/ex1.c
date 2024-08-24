// exemplo 1 


//Exemplo 1: Ponteiro 

#include <stdio.h>

int main() {
    //declarando função
    int x = 10;   // Declaração de uma variável inteira de valor 10
    int *ptr;     // Declaração de um ponteiro para inteiro 

    ptr = &x;     // O ponteiro ptr armazena o endereço de x

    // Exibindo o valor de x, o endereço de x, e o valor armazenado no ponteiro ptr
    printf("O valor da variavel x:\n");
    printf("Valor de x: %d\n", x); //%d para printar int
    printf("O endereço de x:\n");
    printf("Endereco de x: %p\n", &x); //%p para printar hexadecimal
    printf("Valor armazenado em ptr (endereco de x): %p\n", ptr);
    printf("Valor apontado por ptr (valor de x): %d\n", *ptr);
    printf("------------------------\n");

    // Modificando o valor de x usando o ponteiro ptr
    *ptr = 20;

    // Exibindo o novo valor de x após a modificação
    printf("Novo valor de x: %d\n", x);

    return 0;
}
