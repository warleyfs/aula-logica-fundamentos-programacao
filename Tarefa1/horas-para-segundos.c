#include<stdio.h>

void converterHorasParaSegundos(void) {
    // Cria a variável para armazenar o valor das horas
    float horas;

    // Solicita ao usuário que entre com o valor em horas
    printf("Digite o valor em horas a ser convertido em segundos: ");

    // Lê o número digitado e armazena na variável horas
    scanf("%f", &horas);
    printf("\n");

    // Realiza a conversão da temperatura digitada de celsius para fahrenheit 
    float segundos = horas * 60 * 60;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2f horas x 60 x 60 = %0.2f segundos\n\n\n", horas, segundos);
}