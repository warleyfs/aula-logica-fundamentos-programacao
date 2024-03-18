#include<stdio.h>

void calcularIMC(void) {
    // Cria as variáveis necessárias ao cálculo
    float peso, altura;

    // Solicita ao usuário que entre com o seu peso
    printf("Digite o seu peso: ");

    // Lê o número digitado e armazena na variável peso
    scanf("%f", &peso);
    printf("\n");
    
    // Solicita ao usuário que entre com a sua altura
    printf("Digite a sua altura: ");

    // Lê o número digitado e armazena na variável altura
    scanf("%f", &altura);
    printf("\n");

    // Realiza o cálculo do IMC 
    float imc = peso / (altura * altura);

    // Imprime na saída o IMC (Índice de Massa Corporal)
    printf("-----> %0.2f / (%0.2f x %0.2f) = %0.2f \n\n", peso, altura, altura, imc);
}