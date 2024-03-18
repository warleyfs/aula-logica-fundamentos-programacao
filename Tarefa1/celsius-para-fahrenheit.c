#include<stdio.h>

void converterCelsiusParaFahrenheit(void) {
    // Cria a variável para armazenar o valor da temperatura em celsius, fornecida pelo usuario
    float celcius;

    // Solicita ao usuário que entre com o primeiro número
    printf("Digite o valor da temperatura em graus celsius: ");

    // Lê o número digitado e armazena na variável celsius
    scanf("%f", &celcius);
    printf("\n");

    // Realiza a conversão da temperatura digitada de celsius para fahrenheit 
    float fahrenheit = celcius * 1.8 + 32;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2f x 1.8 + 32 = %0.2f \n\n\n", celcius, fahrenheit);
}