#include<stdio.h>

void calcularTempoPercorrerDistancia(void) {
    // Cria as variáveis necessárias ao cálculo
    float distancia, velocidade;

    // Solicita ao usuário que entre com a distancia a ser percorrida
    printf("Digite a distancia a ser percorrida em km: ");

    // Lê o número digitado e armazena na variável distancia
    scanf("%f", &distancia);
    printf("\n");
    
    // Solicita ao usuário que entre com a velocidade media
    printf("Digite a velocidade media em km/h: ");

    // Lê o número digitado e armazena na variável velocidade
    scanf("%f", &velocidade);
    printf("\n");

    // Realiza o cálculo da area do retangulo 
    float tempo = distancia / velocidade;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2f km / %0.2f km/h = %0.2f horas\n\n", distancia, velocidade, tempo);
}