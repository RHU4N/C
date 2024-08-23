#include <stdio.h>  //Necessario para printf

    int main(){
        int x = 5; //criando variavel int = 5
        int *p = &x; //cria o ponteiro da variavel x,& pega o endereço da variavel
        printf("Valor de x: %d\n", *p); //print pra ve se funcionou
    }