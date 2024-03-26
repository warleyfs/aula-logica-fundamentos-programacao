#include<stdio.h>

void calcularAreaDoRetangulo(void) {
    // Cria as variáveis necessárias ao cálculo
    float base, altura;

    // Solicita ao usuário que entre com a medida da base do retângulo
    printf("Digite a medida da base do retangulo em cm: ");

    // Lê o número digitado e armazena na variável base
    scanf("%f", &base);
    printf("\n");
    
    // Solicita ao usuário que entre com a medida da altura do retângulo
    printf("Digite a medida da altura do retangulo em cm: ");

    // Lê o número digitado e armazena na variável altura
    scanf("%f", &altura);
    printf("\n");

    // Realiza o cálculo da area do retangulo 
    float area = base * altura;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2fcm + %0.2fcm = %0.2fcm quadrados\n\n", base, altura, area);
}