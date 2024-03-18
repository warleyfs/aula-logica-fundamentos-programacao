#include<stdio.h>

void somarDoisNumeros(void) 
{
    // Cria as variáveis necessárias ao cálculo
    float numero1, numero2;

    // Solicita ao usuário que entre com o primeiro número
    printf("Digite o primeiro numero da soma: ");

    // Lê o número digitado e armazena na variável numero1
    scanf("%f", &numero1);
    printf("\n");
    
    // Solicita ao usuário que entre com o segundo número
    printf("Digite o segundo numero da soma: ");

    // Lê o número digitado e armazena na variável numero2
    scanf("%f", &numero2);
    printf("\n");

    // Realiza a soma entre os dois números digitados 
    float soma = numero1 + numero2;

    // Imprime na saída a soma dos dois números digitados
    printf("-----> %0.2f + %0.2f = %0.2f\n\n", numero1, numero2, soma);
}