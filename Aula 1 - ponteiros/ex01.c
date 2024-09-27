//1. Crie um programa que troca os valores de duas variaveis usando ponteiros
#include <stdio.h> // fornece a biblioteca que fornece comandos para entrada e saída de dados no computador

//Função main,aquela que roda a aplicação
int main(){
    //criando varaiaveis do tipo inteiro
    int h; //variavel aux
    int x = 10;
    int y = 15;

    //criando ponteiros do tipo inteiro para apontar para X e Y
    int *b = &y;
    int *a = &x;

    //trocando os dados
    h = *b; //variavel aux pega o valor do ponteiro b que é igual espaço Y para não perder o dado y quando mudar ele
    y = *a; //colocando o valor de x no y usando o ponteiro que aponta pra x
    x = h; //colocando o valor de y em x usadno a varaivel aux que pegou o valor do ponteiro de Y

    //imprimindo resultado
    printf("Valor de x é: %d \n", x);
    printf("Valor de y é: %d \n", y);

    return 0;


}