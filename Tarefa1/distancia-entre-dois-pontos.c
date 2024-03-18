#include<stdio.h>

void calcularDistanciaDoisPontos(void) 
{
    // Cria as variáveis necessárias ao cálculo
    float x1, y1, x2, y2;

    // Solicita ao usuário que entre com a coordenada x do primeiro ponto
    printf("Digite a coordenada x do primeiro ponto: ");

    // Lê o número digitado e armazena na variável x1
    scanf("%f", &x1);
    printf("\n");
    
    // Solicita ao usuário que entre com a coordenada y do primeiro ponto
    printf("Digite a coordenada y do primeiro ponto: ");

    // Lê o número digitado e armazena na variável y1
    scanf("%f", &y1);
    printf("\n");

    // Solicita ao usuário que entre com a coordenada x do segundo ponto
    printf("Digite a coordenada x do segundo ponto: ");

    // Lê o número digitado e armazena na variável x2
    scanf("%f", &x2);
    printf("\n");
    
    // Solicita ao usuário que entre com a coordenada y do segundo ponto
    printf("Digite a coordenada y do segundo ponto: ");

    // Lê o número digitado e armazena na variável y2
    scanf("%f", &y2);
    printf("\n");

    // Realiza o cálculo da area do retangulo 
    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Imprime na saída a soma dos dois números digitados
    printf("-----> A distancia entre os pontos x: %0.2f y: %0.2f e x: %0.2f y: %0.2f = %0.2f \n\n", x1, y1, x2, y2, distancia);
}