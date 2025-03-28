#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       long int População, População²; 
    int NúmeroDePontosTúristicos, NúmeroDePontosTúristicos²;
    char Estado, Estado²;  
    char CódigoDaCarta[50];
    char CódigoDaCarta²[50];
    char NomeDaCidade[50];
    char NomeDaCidade²[50];
    float AreaKM², AreaKM²², Pib, Pib², inversoDensidadePopulacional, inversoDensidadePopulacional², Poder, Poder²;
 
    printf("Digite a População: \n");
    scanf("%ld", &População);
 
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
    scanf("%ld", &População²);
 
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
 
 
    DensidadePopulacional = (float)(População / AreaKM²);
    DensidadePopulacional² = (float)(População² / AreaKM²²);
    PibPerCapita = (float)(População / Pib);
    PibPerCapita² = (float)(População² / Pib²);
    inversoDensidadePopulacional = ((float) -(DensidadePopulacional));
    inversoDensidadePopulacional² = ((float) -(DensidadePopulacional²));
    Poder = (float)(População + AreaKM² + Pib + NúmeroDePontosTúristicos + PibPerCapita + InversoDensidadePopulacional);
    Poder² = (float)(População² + AreaKM²² + Pib² + NúmeroDePontosTúristicos² + PibPerCapita² + InversoDensidadePopulacional²);

    printf("Carta 1: \n");
 
 
    printf("População: %ld\n", População);
    printf("Número De Pontos Túristicos: %d\n", NúmeroDePontosTúristicos);
    printf("Estado: %c\n", Estado);
    printf("Codigo da Carta: %s\n", CódigoDaCarta);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("Area em Km²: %f\n", AreaKM²);
    printf("Pib: %f\n", Pib);
    printf("Densidade Populacional: %.2f\n /km²", DensidadePopulacional);
    printf("Pib per Capita: %.2f\n", PibPerCapita);
    printf("Poder da Carta: %f\n", Poder);
 
    printf("Carta 2: \n");
 
 
    printf("População: %ld\n", População²);
    printf("Número De Pontos Túristicos: %d\n", NúmeroDePontosTúristicos²);
    printf("Estado: %c\n", Estado²);
    printf("Codigo da Carta: %s\n", CódigoDaCarta²);
    printf("Nome da Cidade: %s\n", NomeDaCidade²);
    printf("Area em Km²: %f\n", AreaKM²²);
    printf("Pib: %f\n", Pib²);
    printf("Densidade Populacional: %.2f\n /km²", DensidadePopulacional²);
    printf("Pib per Capita: %.2f\n", PibPerCapita²);
    printf("Poder da Carta: %f\n", Poder²);

    printf("Comparação de Cartas: \n");

    ResultadoPopulação = (População > População²);
    ResultadoNumeroDePontosTuristicos = (NúmeroDePontosTúristicos > NúmeroDePontosTúristicos²);
    ResultadoAreaEmKm² = (AreaKM² > AreaKM²);
    ResultaDoPib = (Pib > Pib²);
    ResultadoDensidadePopulacional = (DensidadePopulacional > DensidadePopulacional²);
    PibPercapita = (PibPerCapita > PibPerCapita²);
    PoderDaCarta = (Poder > Poder²);

    printf("População: Carta %d venceu \n", ResultadoPopulação);
    printf("Número De Pontos Túristicos: Carta %d venceu \n", ResultadoNumeroDePontosTuristicos);
    printf("Area em Km²: Carta %d venceu \n", ResultadoAreaEmKm²);
    printf("Pib: Carta %d venceu \n", ResultaDoPib);
    printf("Densidade Populacional: Carta %d venceu \n", ResultadoDensidadePopulacional);
    printf("Pib per Capita: Carta %d venceu \n", PibPercapita);
    printf("Poder da Carta: Carta %d venceu \n", PoderDaCarta);

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
