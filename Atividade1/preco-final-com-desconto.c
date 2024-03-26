#include<stdio.h>

void calcularPrecoFinalComDesconto(void) {
    // Cria as variáveis necessárias ao cálculo
    float preco, desconto;

    // Solicita ao usuário que entre com o preco do produto
    printf("Digite o preco do produto: ");

    // Lê o número digitado e armazena na variável base
    scanf("%f", &preco);
    printf("\n");
    
    // Solicita ao usuário que entre com o percentual de desconto
    printf("Digite o percentual de desconto: ");

    // Lê o número digitado e armazena na variável desconto
    scanf("%f", &desconto);
    printf("\n");

    // Realiza o cálculo do preco abatendo o desconto 
    float precoFinal = preco - ((desconto / preco) * 100);

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2f - %0.2f% = %0.2f\n\n", preco, desconto, precoFinal);
}