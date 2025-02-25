#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   int População, População², NúmeroDePontosTúristicos, NúmeroDePontosTúristicos²;
   char Estado, Estado²;  
   char CódigoDaCarta[50];
   char CódigoDaCarta²[50];
   char NomeDaCidade[50];
   char NomeDaCidade²[50];
   float AreaKM², AreaKM²², Pib, Pib²;


   printf("Digite a População: \n");
   scanf("%d", &População);

   printf("Digite a quantidade de Pontos Tristicos: \n");
   scanf("%d", &NúmeroDePontosTúristicos);

   printf("Digite o Estado: \n");
   scanf("%c", &Estado);

   printf("Digite o Código da Carta: \n");
   scanf("%s" &CódigoDaCarta);

   printf("Digite o nome da cidade: \n");
   scanf("%s" &NomeDaCidade);

   printf("Digite a area em km²: \n");
   scanf("%f" &AreaKM²);

   printf("Digite o Pib: \n");
   scanf("%f" &Pib);



   printf("Digite as informações da segunda carta: \n");



   printf("Digite a População: \n");
   scanf("%d", &População²);

   printf("Digite a quantidade de Pontos Tristicos: \n");
   scanf("%d", &NúmeroDePontosTúristicos²);

   printf("Digite o Estado: \n");
   scanf("%c", &Estado²);

   printf("Digite o Código da Carta: \n");
   scanf("%s" &CódigoDaCarta²);

   printf("Digite o nome da cidade: \n");
   scanf("%s" &NomeDaCidade²);

   printf("Digite a area em km²: \n");
   scanf("%f" &AreaKM²²);

   printf("Digite o Pib: \n");
   scanf("%f" &Pib²);


   printf("Carta 1: \n");


   printf("População: %d\n", População);
   printf("Número De Pontos Túristicos: %d\n", NúmeroDePontosTúristicos);
   printf("Estado: %c\n", Estado);
   printf("Codigo da Carta: %s\n", CódigoDaCarta);
   printf("Nome da Cidade: %s\n", NomeDaCidade);
   printf("Area em Km²: %f\n", AreaKM²);
   printf("Pib: %f\n", Pib);


   printf("Carta 2: \n");


   printf("População: %d\n", População²);
   printf("Número De Pontos Túristicos: %d\n", NúmeroDePontosTúristicos²);
   printf("Estado: %c\n", Estado²);
   printf("Codigo da Carta: %s\n", CódigoDaCarta²);
   printf("Nome da Cidade: %s\n", NomeDaCidade²);
   printf("Area em Km²: %f\n", AreaKM²²);
   printf("Pib: %f\n", Pib²);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
