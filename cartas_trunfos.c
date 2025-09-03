#include <stdio.h>
#include <string.h>

struct Carta // estrutura da carta
{
    char opcao; // A a H
    char codigo[5]; // A01, B02, C03...
    char pais[50]; // Brasil, Argentina...
    unsigned long int populacao; // em numero inteiro
    float area; // em km²
    float pib; // em bilhões de reais
    int pontosTuristicos; //em numero inteiro
    float densidadePopulacional; // em hab/km²
    float PIBperCapita; // em reais
    float superpoder; // soma de todos os atributos numericos
};


// Função principal


int main(){
    struct Carta c1, c2;

    //////////// Cadastro da carta 1 ////////////////


    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite uma opcao de (A a H): ");
    scanf(" %c", &c1.opcao);

    printf("Digite o codigo do País (ex: A01): ");
    scanf("%s", c1.codigo);

    printf("Digite o País (ex: Brasil): ");
    scanf("%s", c1.pais);

    printf("Digite o numero da populacao: ");
    scanf("%lu", &c1.populacao);

    printf("Digite a area do País(em km²): ");
    scanf("%f", &c1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &c1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos );



    //////////// Cadastro da carta 2 ////////////////

    printf("== Cadastro da carta 2 ==\n");

    printf("Digite uma opcao de (A a H): ");
    scanf(" %c", &c2.opcao);

    printf("Digite o codigo do País (ex: A01): ");
    scanf("%s", c2.codigo);

    printf("Digite o País (ex: Brasil): ");
    scanf("%s", c2.pais);

    printf("Digite o numero da populacao: ");
    scanf("%lu", &c2.populacao);

    printf("Digite a area do País(em km²): ");
    scanf("%f", &c2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &c2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    ////// Cálculo dos atributos derivados //////

    c1.densidadePopulacional = c1.populacao / c1.area; // Calculando densidade populacional
    c1.PIBperCapita = c1.pib / c1.populacao; // Convertendo PIB para reais e calculando PIB per capita
    c1.superpoder = c1.populacao + (int)c1.area + (int)c1.pib + c1.pontosTuristicos + (int)c1.PIBperCapita + (int)c1.densidadePopulacional; // Calculando superpoder

    c2.densidadePopulacional = c2.populacao / c2.area; // Calculando densidade populacional
    c2.PIBperCapita = c2.pib / c2.populacao; // Convertendo PIB para reais e calculando PIB per capita
    c2.superpoder = c2.populacao + (int)c2.area + (int)c2.pib + c2.pontosTuristicos + (int)c2.PIBperCapita + (int)c2.densidadePopulacional; // Calculando superpoder

    ////// Exibição das cartas cadastradas //////


    printf("\n*** Carta 1 ***\n");
    printf("Opcao: %c\n", c1.opcao);
    printf("Codigo: %s\n", c1.codigo);
    printf("País: %s\n", c1.pais);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area: %.2f km²\n", c1.area);
    printf("PIB: %.2f bilhões de reais\n", c1.pib);
    printf("Numero de Pontos Turisticos: %d\n", c1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", c1.PIBperCapita);
    printf("Superpoder: %.2f\n", c1.superpoder);

    ///// Exibição da segunda carta cadastrada //////

    printf("\n*** Carta 2 ***\n");
    printf("Opcao: %c\n", c2.opcao);
    printf("Codigo: %s\n", c2.codigo);
    printf("País: %s\n", c2.pais);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area: %.2f km²\n", c2.area);
    printf("PIB: %.2f bilhões de reais\n", c2.pib);
    printf("Numero de Pontos Turisticos: %d\n", c2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", c2.PIBperCapita);
    printf("Superpoder: %.2f\n", c2.superpoder);  
    
    
    ////// Comparacao das cartas //////

    printf("\n=== Comparacao das Cartas ===\n");
    printf("Populacao: %s\n", (c1.populacao >= c2.populacao)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; // compara populacao
    printf("Area: %s\n", (c1.area >= c2.area)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; /// compara area
    printf("Pib: %s\n", (c1.pib >= c2.pib)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; // compara pib
    printf("Pontos Turisticos: %s\n", (c1.pontosTuristicos >= c2.pontosTuristicos)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; // compara pontos turisticos
    printf("Densidade Populacional: %s\n", (c1.densidadePopulacional >= c2.densidadePopulacional)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; // compara densidade populacional
    printf("PIB per Capita: %s\n", (c1.PIBperCapita >= c2.PIBperCapita)? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");; // compara pib per capita
    printf("Super Poder: %s\n", (c1.superpoder >= c2.superpoder) ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)"); // compara superpoder

    return 0;
    
}



