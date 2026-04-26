#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 //Variaveis carta 1
  char estado1;
  char codigo1[4];
  char nome1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  // Adição Aventureiro
  float densidade1;
  float pibPerCapita1;

  //Variaveis carta 2
  char estado2;
  char codigo2[4];
  char nome2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

   // Adição Aventureiro
  float densidade2;
  float pibPerCapita2;


  // Área para entrada de dados
  //Cadastro da carta 1
  printf("Digite o Estado da carta 1 (A-H):");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta A01:");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade 1: ");
  scanf("%s", nome1);

  printf("Digite o Populacao da carta 1: ");
  scanf("%d", &populacao1);

  printf("Digite a area da carta 1:");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: ");
  scanf("%f", &pib1);

  printf("Digite n de pontos turisticos: 1");
  scanf("%d", &pontos1);

  //Cadrastro da carta 2
  printf("Digite o estsdo (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo (B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nome2);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o n de pontos turisticos: ");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

  printf("DADOS DA CARTA 1");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f",  pib1);
  printf("Pontos turisticos: %d\n", pontos1);

  printf("DADOS DA CARTA 2");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f",  pib2);
  printf("Pontos turisticos: %d\n", pontos2);

   // --- CÁLCULOS AVENTUREIRO CARTA 1 ---
  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  // CADASTRO CARTA 2
  printf("\nDigite o Estado da carta 2 (A-H): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo2);
  printf("Digite o Nome da Cidade 2: ");
  scanf("%s", nome2);
  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);
  printf("Digite a area: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o n de pontos turisticos: ");
  scanf("%d", &pontos2);

  // --- CÁLCULOS AVENTUREIRO CARTA 2 ---
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = pib2 / (float)populacao2;

  // EXIBIÇÃO CARTA 1
  printf("\n--- DADOS DA CARTA 1 ---\n");
  printf("Estado: %c - Codigo: %s\nNome: %s\n", estado1, codigo1, nome1);
  printf("Populacao: %d - Area: %.2f km2\n", populacao1, area1);
  printf("PIB: %.2f\n", pib1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  // EXIBIÇÃO CARTA 2
  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Estado: %c - Codigo: %s\nNome: %s\n", estado2, codigo2, nome2);
  printf("Populacao: %d - Area: %.2f km2\n", populacao2, area2);
  printf("PIB: %.2f\n", pib2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


return 0;
}