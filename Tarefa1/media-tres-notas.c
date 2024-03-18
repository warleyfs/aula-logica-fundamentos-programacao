#include<stdio.h>

void calcularMediaTresNotas(void) 
{
    // Cria as variáveis necessárias ao cálculo
    float nota1, nota2, nota3;

    // Solicita ao usuário que entre com a primeira nota
    printf("Digite o primeira nota para calculo da media: ");

    // Lê o número digitado e armazena na variável nota1
    scanf("%f", &nota1);
    printf("\n");

    // Solicita ao usuário que entre com a segunda nota
    printf("Digite o segunda nota para calculo da media: ");

    // Lê o número digitado e armazena na variável nota2
    scanf("%f", &nota2);
    printf("\n");

    // Solicita ao usuário que entre com a terceira nota
    printf("Digite o terceira nota para calculo da media: ");

    // Lê o número digitado e armazena na variável nota3
    scanf("%f", &nota3);
    printf("\n");

    // Realiza o calculo da media aritmetica entre as notas digitadas 
    float media = (nota1 + nota2 + nota3) / 3;

    // Imprime na saída a media das notas digitadas
    printf("-----> (%0.2f + %0.2f + %0.2f) / 3 = %0.2f \n\n\n", nota1, nota2, nota3, media);
}