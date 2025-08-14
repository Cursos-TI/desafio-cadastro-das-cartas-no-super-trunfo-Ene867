#include <stdio.h>
#include (string.h>
  
int main() {
// Desafio Super Trunfo (Novato)
// Tema Países - Cadastro das Cartas
// Declaração das variáveis para a carta 1
char estado1 = 'A';
char codigo1[5] = "A01";
char nomeCidade1[50] = "Sao Paulo";
int populacao1 = 45973197;
float area1 = 1521.202;
float pib1 = 828.98;
int pontosTuristicos1 = 83;

// Declaração das variáveis para a carta 2
char estado2 = 'B';
char codigo2[5] = "B02";
char nomeCidade2[50] = "Belo Horizonte";
int populacao2 = 21322691;
float area2 = 586513.983;
float pib2 = 257.8;
int pontosTuristicos2 = 18;

  printf("\tBem Vindo ao Desafio das Cartas Super Trunfo (Novato)\n\n");

// Entrada de dados para a carta 1
printf("Insira os dados da Carta1:\n");
printf("Estado: "); scanf(" %c", &estado1);
printf("Codigo da Carta: "); scanf("%s", codigo1);
printf("Nome da Cidade: "); scanf("%[^\n]", nomeCidade1);
printf("Populacao: "); scanf("%d", &populacao1);
printf("Area (em km²): "); scanf("%f", &area1);
printf("PIB (em bilhoes de reais): "); scanf("%f", &pib1);
printf("Nº de Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

// Entrada de dados para a carta 2
printf("\nInsira os dados da Carta2:\n");
printf("Estado: "); scanf(" %c", &estado2);
printf("Codigo da Carta: "); scanf("%s", codigo2);
printf("Nome da Cidade: "); scanf("%[^\n]", nomeCidade2);
printf("Populacao: "); scanf("%d", &populacao2);
printf("Area (em km²): "); scanf("%f", &area2);
printf("PIB (em bilhoes de reais): "); scanf("%f", &pib2);
printf("Nº de Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

// Exibição dos dados da Carta 1
printf("\n\n========== Dados das Cartas ==========\n");
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosTuristicos1);

// Exibição dos dados da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
}

