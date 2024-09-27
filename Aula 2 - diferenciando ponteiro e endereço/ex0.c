#include <stdio.h>// fornece a biblioteca que fornece comandos para entrada e saída de dados no computador

//função main
    int main(){

        int x = 5; //iniciuando variavel de valor 5
        int *px; // criando ponteiro
        px = &x;  //colocando o ponteiro para apontar pra x

        //imprimindo resultado
        printf("Valor de x: %p\n", px); 


        return 0;
    }
