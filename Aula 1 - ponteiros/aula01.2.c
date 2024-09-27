#include <stdio.h> // fornece a biblioteca que fornece comandos para entrada e saída de dados no computador

//inicio função main
int main(){
    int x = 10; //criando varaiavel inteira de valor 10
    int *p = &x; //criando ponteiro da variavel int
    int **pp = &p; //pp é  ponteiro de p,criando ponteiro do ponteiro

    //imprimindo dado
    printf("Valor de x usando pp: %d \n", **pp);

    return 0;


}