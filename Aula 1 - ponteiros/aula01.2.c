#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p; //pp é  ponteiro de p
    printf("Valor de x usando pp: %d \n", **pp);

    return 0;


}