#include <stdio.h>
#include <math.h>
int main(){
    //variaveis
    int opc;
    //vaiaveis opc1
    double altura, peso, imc;
    //variaveis opc2
    int opmat;
    double num1, num2, result;
    //variaveis opc 3
    double r, area;
    //variaveis opc 4
    int tc;
    double tf;

    printf("Digite a opcao desejada:\n\n1- IMC\n2- Operacoes Matematicas\n3- Calcular area do circulo\n4- Conversao de temperatura\n");
    scanf("%i", &opc);

    switch (opc)
    {
    // IMC
    case 1:
        printf("Digite sua altura: ");
        scanf("%lf", &altura);
        printf("Digite seu peso: ");
        scanf("%lf", &peso);
        imc = peso/(altura * altura);
        printf("Seu IMC e de: %.2lf", imc);

        break;
        
    // Operacoes matematica basica
    case 2:

        printf("Digite uma operacao matematica:\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n");
        scanf("%i", &opmat);

        switch (opmat)
        {
        case 1:
            printf("Digite um numero A: ");
            scanf("%lf", &num1);
            printf("Digite um numero B: ");
            scanf("%lf", &num2);
            result = num1+num2;
            printf("O resultado da sua soma e: %.2lf", result);
            break;
        case 2:
            printf("Digite um numero A: ");
            scanf("%lf", &num1);
            printf("Digite um numero B: ");
            scanf("%lf", &num2);
            result = num1-num2;
            printf("O resultado da sua subtracao e: %.2lf", result);
            break;
        case 3:
            printf("Digite um numero A: ");
            scanf("%lf", &num1);
            printf("Digite um numero B: ");
            scanf("%lf", &num2);
            result = num1*num2;
            printf("O resultado da sua multiplicacao e: %.2lf", result);
            break;
        case 4:
            printf("Digite um numero A: ");
            scanf("%lf", &num1);
            printf("Digite um numero B: ");
            scanf("%lf", &num2);
            result = num1/num2;
            printf("O resultado da sua divisao e: %.2lf", result);
            break;

        default:
            printf("Opereacao invalida");
            break;
        }        
        break;

    // area do circulo
    case 3:
        printf("Digite o raio do circulo: ");
        scanf("%lf", &r);
        area = 3.14*r*r;
        printf("A area do seu circulo e %.2lf", area);
        break;

    // conversao de temperatura
    case 4:
        printf("Digite uma temperatura em Celsius para converter para Fahrenheit: ");
        scanf("%i", &tc);
        tf = tc * 1.8 + 32;
        printf("Sua temperatura de %i graus Celsius equivale a %.2lf Fahrenheit.", tc, tf);
        break;

    default:
    printf("Opcao invalida");
        break;
    }
}