#include <stdio.h> // fornece a biblioteca que fornece comandos para entrada e saída de dados no computador
#include <math.h> //fornece a biblioteca com funções matematicas

//função pra calcular equaçãod e 2°grau que recebe o valor de a,b,c
    void delta(a,b,c){
        int delta; //iniciando a variavel inteira
        delta = pow(b,2)-4*a*c;//fazendo a conta para saber o delta
    //if else pra analisar se a conta é possivel
    if (delta<0)
    {
        printf("Impossivel");
    }else{ //calcula a equação
        int x1 = (-b+sqrt(delta))/2*a;
        int x2 = (-b-sqrt(delta))/2*a;
        printf("O x1 é %d\nE x2 é %d",x1,x2);//entregando os dois valores possiveis
    }
    }

int main(){
    int a,b,c; //iniciando variaveis inteiras a,b,c

    //pedindo para o usuario colocar os valores
    printf("-=-=-=-=-=-=-=-=-=-\n");
    printf("Calculando equação de 2°Grau\n");
    printf("Digite o valor de A\n");
    scanf("%d",&a);
    printf("Digite o valor de B\n");
    scanf("%d",&b);
    printf("Digite o valor de C\n");
    scanf("%d",&c);

    //com os valores chama a função para calcular a eq2
    delta(a,b,c);
    return 0;
}