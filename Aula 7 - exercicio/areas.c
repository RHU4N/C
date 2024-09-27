#include <stdio.h>
#include <math.h>
#include <locale.h>

    void areaTri(){
        double b,h,res;
        double *pb = &b;
        double *ph = &h;
        printf("Calculando a area do Triangulo");
        printf("\n-=-=-=-=-=-=-=-=-=-");
        printf("\nDigite o comprimento da base do triangulo\n");
        scanf("%lf", &*pb);
        printf("\nDigite o comprimento da altura do triangulo\n");
        scanf("%lf", &*ph);
        
        res = ((*pb)*(*ph))/2;

        setlocale(LC_ALL, "Portuguese");
        printf("\nA area do triangulo É: %lf",res);
    }

    void areaCir(){
        double r,res;
        double pi = M_PI;
        double *pr = &r;
        printf("Calculando a area do Circulo");
        printf("\n-=-=-=-=-=-=-=-=-=-");
        printf("\nDigite o comprimento do raio do circulo\n");
        scanf("%lf", &*pr);
        res = pi * pow(*pr,2);

        printf("A área de um círculo com raio %.2lf é %.2lf\n", *pr, res);
    }

    void circuferencia(){
        double r,res;
        double pi = M_PI;
        double *pr = &r;
        printf("Calculando a area do Circulo");
        printf("\n-=-=-=-=-=-=-=-=-=-");
        printf("\nDigite o comprimento do raio do circulo\n");
        scanf("%lf", &*pr);
        res = 2 * (pi) * (*pr);

        printf("A circuferencia de um círculo com raio %.2lf é %.2lf\n", *pr, res);
    }

    void areaQua(){
        double b,h,res;
        double *pb = &b;
        double *ph = &h;
        printf("Calculando a area do Quadrado");
        printf("\n-=-=-=-=-=-=-=-=-=-");
        printf("\nDigite o comprimento da base do Quadrado\n");
        scanf("%lf", &*pb);
        printf("\nDigite o comprimento da altura do Quadrado\n");
        scanf("%lf", &*ph);
        
        res = ((*pb)*(*ph));

        setlocale(LC_ALL, "Portuguese");
        printf("\nA area do Quadrado é: %lf",res);
    }

    void areaTra(){
        double bM,bm,h,res;
        double *pbM = &bM;
        double *pbm = &bm;
        double *ph = &h;
        printf("Calculando a area do Trapezio");
        printf("\n-=-=-=-=-=-=-=-=-=-");
        printf("\nDigite o comprimento da base maior do Trapezio\n");
        scanf("%lf", &*pbM);
        printf("\nDigite o comprimento da base menor do Trapezio\n");
        scanf("%lf", &*pbm);
        printf("\nDigite o comprimento da altura do Quadrado\n");
        scanf("%lf", &*ph);
        
        res = ((*pbM+*pbm) * (*ph))/2 ;

        setlocale(LC_ALL, "Portuguese");
        printf("\nA area do Trapezio é: %lf",res);
    }


int main(){
    int e;
    printf("Digite o que vc quer fazer:\nArea do quadrado(1)\nArea do Triangulo(2)\nArea do circulo(3)\nCalculo da circuferencia(4)\nCalculo da Area do trapezio(5)\n");
    scanf("%d",&e);
    switch (e)
    {
    case 1:
        areaQua();
        break;

    case 2:
        areaTri();
        break;

    case 3:
        areaCir();
        break;

    case 4:
        circuferencia();
        break;
    
    case 5:
        areaTra();
        break;

    default:
        printf("Digite um valor valido");
        break;
    }
    return 0;
}