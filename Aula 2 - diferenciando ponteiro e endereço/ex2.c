// // exemplo 2


// // escrever um codigo usando pivo que calcule o quadrado de um número


#include <stdio.h>

// Função que calcula o quadrado de um número usando ponteiro
void calcularQuadrado(int *n) {
    *n = (*n) * (*n); // Acessa o valor apontado pelo ponteiro e calcula o quadrado
}

int main() {
    int numero = 0;   // Declaração de uma variável inteira para armazenar o número
    int *ptr;     // Declaração de um ponteiro para inteiro

    // Solicita que o usuário insira um número
    printf("Digite um numero inteiro: "); 
    scanf("%i",&numero); // Lê o número inserido e o armazena na variável 'numero'

    // numero=10;
    ptr = &numero; // O ponteiro ptr armazena o endereço de 'numero'

    // Chama a função para calcular o quadrado do número usando o ponteiro
    calcularQuadrado(ptr);

    // Exibe o resultado, que agora está armazenado na variável 'numero'
    printf("O quadrado do numero e: %d\n", numero);

    return 0; // Finaliza o programa
}