// Import de libs
#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Import dos programas utilitários
#include "./soma-dois-numeros.c"
#include "./media-tres-notas.c"
#include "./celsius-para-fahrenheit.c"
#include "./area-do-retangulo.c"
#include "./volume-esfera.c"
#include "./calculadora-imc.c"
#include "./horas-para-segundos.c"
#include "./preco-final-com-desconto.c"
#include "./distancia-entre-dois-pontos.c"
#include "./tempo-percorrer-distancia.c"

// Struct representando cada item de menu
struct menuItem
{
    int numero;
    char* descricao;
};

// Função que imprime um item de menu
void printMenuItem(struct menuItem *s)
{
    printf(" - %d) %s\n", s->numero, s->descricao);
};

int main()
{
    // Instancia um struct como um array de itens de menu
    struct menuItem menu[11] = {
        { 0, "Sair do programa" },
        { 1, "Calcular a soma de dois numeros" },
        { 2, "Media de tres notas" },
        { 3, "Conversao de Celsius para Fahrenheit" },
        { 4, "Area do retangulo" },
        { 5, "Volume de uma esfera" },
        { 6, "Calculadora de IMC" },
        { 7, "Conversao de Horas para Segundos" },
        { 8, "Preco final com desconto" },
        { 9, "Distancia entre dois pontos" },
        { 10, "Tempo necessario para percorrer uma distancia" }
    };

    // Loop quase infinito, mantendo o usuário no menu até que decida encerrar
    while(1)
    {
        // Monta o menu
        printf("LOGICA E FUNDAMENTOS DE PROGRAMACAO\n");
        printf("Atividade 01 - Programas utilitarios para sistema de controle de producao\n");
        printf("=========================================================================\n");
        
        for (int i = 0; i < 11; i++)
        {
            printMenuItem(&(menu[i]));
        }

        printf("=========================================================================\n");
        printf("\n");
        printf("Escolha uma opcao: ");

        // Obtém o número fornecido pelo usuário e armazena na variável input
        int input;
        scanf("\n%d", &input);
        printf("\n");
        
        // Finaliza o programa se o usuário pressionar 0
        if (input == 0)
        {
            printf("Ate breve!");
            break;
        }
        
        // De acordo com a opção do usuário, carrega o programa utilitário
        switch (input)
        {
            case 1:
                somarDoisNumeros();
                break;
            case 2:
                calcularMediaTresNotas();
                break;
            case 3:
                converterCelsiusParaFahrenheit();
                break;
            case 4:
                calcularAreaDoRetangulo();
                break;
            case 5:
                calcularVolumeEsfera();
                break;
            case 6:
                calcularIMC();
                break;
            case 7:
                converterHorasParaSegundos();
                break;
            case 8:
                calcularPrecoFinalComDesconto();
                break;
            case 9:
                calcularDistanciaDoisPontos();
                break;
            case 10:
                calcularTempoPercorrerDistancia();
                break;
            default:
                printf("Entre com um numero correspondente a um item do menu.\n\n\n");
                break;
        }   
    }
}
