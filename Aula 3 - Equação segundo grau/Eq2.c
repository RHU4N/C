#include <stdio.h>
#include <math.h>
#include <locale.h>

    void delta(a,b,c){
        int delta;
        delta = pow(b,2)-4*a*c;
    if (delta<0)
    {
        printf("Impossivel");
    }else{
        int x1 = (-b+sqrt(delta))/2*a;
        int x2 = (-b-sqrt(delta))/2*a;
        printf("O x1 é %d\nE x2 é %d",x1,x2);
    }
    }

int main(){
    int a,b,c;
    printf("-=-=-=-=-=-=-=-=-=-\n");
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    printf("Calculando equação de 2°Grau\n");
    printf("Digite o valor de A\n");
    scanf("%d",&a);
    printf("Digite o valor de B\n");
    scanf("%d",&b);
    printf("Digite o valor de C\n");
    scanf("%d",&c);
    delta(a,b,c);
    return 0;
}