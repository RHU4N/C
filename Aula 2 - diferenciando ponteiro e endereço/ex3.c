// // escrever um codigo que  calcule a soma de array 



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Declaração de um array de inteiros
    int tamanho = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array
    int soma = 0; // Variável para armazenar a soma dos elementos
    int *ptr; // Declaração de um ponteiro para inteiro

    ptr = arr; // O ponteiro ptr aponta para o primeiro elemento do array

    // Loop para percorrer todos os elementos do array usando o ponteiro
    for (int i = 0; i < tamanho; i++) {
        soma += *(ptr + i); // Soma o valor apontado pelo ponteiro e o índice
    }

    // Exibe o resultado da soma
    printf("A soma dos elementos do array e: %d\n", soma);

    return 0; // Finaliza o programa
}

