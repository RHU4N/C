/// Escreva uma função que multiplica dois números inteiros usando ponteiros e 
/// retorna o resultado por referência.


#include <stdio.h>

// Função que multiplica dois números e retorna o resultado por referência
void multiplicar(int *a, int *b, int *resultado) {
    *resultado = (*a) * (*b); // Multiplica os valores apontados por 'a' e 'b' e armazena em 'resultado'
}

int main() {
    int num1, num2, produto; // Declaração de variáveis inteiras

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Chama a função 'multiplicar', passando os endereços das variáveis
    multiplicar(&num1, &num2, &produto);

    // Exibe o resultado da multiplicação
    printf("O produto de %d e %d e: %d\n", num1, num2, produto);

    return 0; // Finaliza o programa
}




