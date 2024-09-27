#include <stdio.h>
    int main(){
        int res; //variavel recebe tipo inteiro
        int x = 10;  // variavel recebe valor 10
        int y = 20; // variavel recebe valor 20
        int *px; // definindo ponteiro x
        int *py; // definindo ponteiro de y 
        px = &x; //ponteiro x recebe o endereco fisico de x 
        py = &y; // ponteiro y recebe o endereco fisico de y

        res = *px+10; // armazenando na variavel de result o valor de x+10
        *px = *py+5;//armazenando no ponteiro de x o valor de y+5
        *py = res +*px;//armazenando no ponteiro de y o valor de x+10(res) + valor de y+5(*px)

        res=*py+2; //aramazendando em res o valor total até agora(*py)+2

        printf("%d",res);//imprimindo resultado

        return 0;

    }