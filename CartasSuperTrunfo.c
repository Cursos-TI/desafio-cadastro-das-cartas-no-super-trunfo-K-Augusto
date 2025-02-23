#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Variáveis declaradas
    char EstadoAlagoas ='A', EstadoAmazonas ='B';
    char CodigoCarta1[4] = "A01";
    char CodigoCarta2[4] = "B02";
    char NomeCidade1[50] = "Maceió", NomeCidade2[50] = "Manaus";
    int PopulacaoMaceio = 957916, PopulacaoManaus = 2279686;
    float AreaemKmMaceio = 509320.00, AreaemKmManaus = 11401.092;
    float PibMaceio = 2748401631, PibManaus = 103281436041;
    int PontTuristMaceio = 30, PontTuristManaus = 12;

    //Impressão da 1ª carta registrada
    printf("\nA carta 1 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAlagoas);
    printf("Código do Estado: %s\n",CodigoCarta1);
    printf("Nome da cidade: %s\n",NomeCidade1);
    printf("População: %d\n",PopulacaoMaceio);
    printf("Área: %.2f Km²\n",AreaemKmMaceio);
    printf("PIB: %.2f milhões de reais\n",PibMaceio);
    printf("Número de pontos turísticos: %d\n",PontTuristMaceio);

    //Impressão da 2ª carta registrada
    printf("\nA carta 2 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAmazonas);
    printf("Código do Estado: %s\n",CodigoCarta2);
    printf("Nome da cidade: %s\n",NomeCidade2);
    printf("População: %d\n",PopulacaoManaus);
    printf("Área: %.2f Km²\n",AreaemKmManaus);
    printf("PIB: %.2f milhões de reais\n",PibManaus);
    printf("Número de pontos turísticos: %d\n",PontTuristManaus);

    return 0;
}
