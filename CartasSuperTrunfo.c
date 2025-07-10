#include <stdio.h>
int main() {
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Declaração das variáveis para a carta 1
char estado1 = "A";
char codigo1[20] = "A01";
char nomeCidade1[50] = "SaoPaulo";
int populacao1 = 45973197;
float area1 = 1521202;
float pib1 = 829.1;
int pontosTuristicos1 = 83;

// Declaração das variáveis para a carta 2
char estado2 = "B";
char codigo2[20] = "B02";
char nomeCidade2[50] = "MinasGerais";
int populacao2 = 21322691;
float area2 = 586513983;
float pib2 = 257.8;
int pontosTuristicos2 = 18;

// Entrada de dados para a carta 1
printf("Insira os dados da Carta1:\n");
printf("Estado (A): ");
scanf(" %c", &estado1);
printf("Codigo da Carta (A01): ");
scanf("%s", codigo1);
printf("Nome da Cidade: ");
scanf("%[^\n]", nomeCidade1); // Lê string com espaços
printf("Populacao: ");
scanf("%d", &populacao1);
printf("Area (em km²): ");
scanf("%f", &area1);
printf("PIB (em bilhoes de reais): ");
scanf("%f", &pib1);
printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontosTuristicos1);

// Entrada de dados para a carta 2
printf("\nInsira os dados da Carta2:\n");
printf("Estado (B): ");
scanf(" %c", &estado2);
printf("Codigo da Carta (B02): ");
scanf("%s", codigo2);
printf("Nome da Cidade: ");
scanf("%[^\n]", nomeCidade2); // Lê string com espaços
printf("Populacao: ");
scanf("%d", &populacao2);
printf("Area (em km²): ");
scanf("%f", &area2);
printf("PIB (em bilhoes de reais): ");
scanf("%f", &pib2);
printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontosTuristicos2);

// Exibição dos dados da Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

// Exibição dos dados da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
}

