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

    char LetraEstado1 ='A', LetraEstado2 ='B';
    char CodigoEstado1[4] = "A01";
    char CodigoEstado2[4] = "B02";
    char NomeCidade1[50] = "Maceió", NomeCidade2[50] = "Manaus";
    int PopulacaoMaceio = 957916, PopulacaoManaus = 2279686;
    float AreaemKmMaceio = 509.320, AreaemKmManaus = 11401.092;
    float PibMaceio = 2748401631, PibManaus = 103281436041;
    int NumPontTuristMaceio = 30, NumPontTuristManaus = 12;

    printf("1º jogador, digite a letra A para visualizar os atributos da sua carta: ");
    scanf("%c",&LetraEstado1);

    LetraEstado1 = 'A';
    
    printf("\nA carta do 1º jogador possui os atributos.:\n");
    printf("\nEstado: %c\n",LetraEstado1);
    printf("Código do Estado: %s\n",CodigoEstado1);
    printf("Nome da cidade: %s\n",NomeCidade1);
    printf("População: %d\n",PopulacaoMaceio);
    printf("Área: %f Km²\n",AreaemKmMaceio);
    printf("PIB: %f milhões de reais\n",PibMaceio);
    printf("Número de pontos turísticos: %d\n",NumPontTuristMaceio);

    printf("\n2º jogador, digite a letra B para visualizar os atributos da sua carta: \n");
    scanf("%c",&LetraEstado2);

    LetraEstado2 = 'B';

    printf("\nA carta do 2º jogador possui os atributos.:\n");
    printf("\nEstado: %c\n",LetraEstado2);
    printf("Código do Estado: %s\n",CodigoEstado2);
    printf("Nome da cidade: %s\n",NomeCidade2);
    printf("População: %d\n",PopulacaoManaus);
    printf("Área: %f Km²\n",AreaemKmManaus);
    printf("PIB: %f milhões de reais\n",PibManaus);
    printf("Número de pontos turísticos: %d\n",NumPontTuristManaus);


















    return 0;
}
