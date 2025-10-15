#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[30];
  char codigo[5];
  char nome[50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;

  // Área para entrada de dados
  printf("=== Cadastro de Carta Super Trunfo ===\n");

  printf("Digite o Estado: ");
  scanf("%s", estado);

  printf("Digite o Código da Carta (ex: A01): ");
  scanf("%s", codigo);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nome);

  printf("Digite a População: ");
  scanf("%d", &populacao);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib);

  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta Cadastrada ===\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("População: %d habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);

  return 0;
}
