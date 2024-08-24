


#include <stdio.h>
int main(){


int res; //variavel recebe tipo inteiro
int x = 10;  // variavel recebe valor 10
int y = 20; // variavel recebe valor 20
int *px; // definindo ponteiro x
int *py; // definindo ponteiro de y 
px = &x; //ponteiro x recebe o endereco fisico de x 
py = &y; // ponteiro y recebe o endereco fisico de y

res = *px+10;

*px = *py+5;

*py = res +*px;

px=px;


res=*py+2;



printf("%d",res);

return 0;

}