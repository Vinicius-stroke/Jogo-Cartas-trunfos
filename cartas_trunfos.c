#include  <stdio.h>
#include  <string.h>

struct  cartas
{
   char estado[3];
   char codigo[5];
   char cidade[50];
   int populacao, pontosTuristicos;
   float area, pib;
};

void exibircarta(struct cartas c, int numero)
{
   printf("\n=======================================\n");
   printf("Carta %d:\n", numero);
   printf("\nEstado: %s\n", c.estado);
   printf("Código: %s\n", c.codigo);
   printf("Nome da Cidade: %s\n", c.cidade);
   printf("População: %d\n", c.populacao);
   printf("Área: %.2f km²\n", c.area);
   printf("PIB: %.2f bilhões de reais\n", c.pib);
   printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
   printf("=======================================\n");
}
