#include<stdio.h>

void calcularVolumeEsfera(void) {
    
    // Cria as variáveis necessárias ao cálculo
    float raio;
    const float pi = 3.14159265;

    // Solicita ao usuário que entre com a medida da base do retângulo
    printf("Digite o raio da esfera em cm: ");

    // Lê o número digitado e armazena na variável raio
    scanf("%f", &raio);
    printf("\n");
    
    // Realiza o cálculo da area do retangulo 
    float volume = (4 * pi * pow(raio, 3)) / 3;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> (4 x Pi x (%0.2f ^ 3)) / 3 = %0.2fcm cubicos\n\n", raio, volume);
}