#include <stdio.h>

int main(){
    double v1,v2,res;

    printf("Digite o 1 numero:");
    scanf("%lf",&v1);
    printf("Digite o 2 numero:");
    scanf("%lf",&v2);
    
    int ope;
    while (ope == 1 || ope == 2 || ope == 3)
    {
        printf("Qual operação vc quer fazer:\n1-soma\n2-subtracao\n3-multiplicação");
        scanf("%d",&ope);
        switch (ope)
    {
    case 1:
        res = v1+v2;
        printf("O resultado é: %lf", res);
        break;
    
        case 2:
        res = v1-v2;
        printf("O resultado é: %lf", res);
        break;

        case 3:
        res = v1*v2;
        printf("O resultado é: %lf", res);
        break;
    
    default:
    printf("Digite um valor valido\n");
    continue;
    }
    }
    
    return 0;
}