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
    char EstadoAlagoas = 'A',EstadoAmazonas ='B';
    char CodigoCarta1[4] = "A01", CodigoCarta2[4] = "B02";
    char NomeCidade1[50] = "MACEIO", NomeCidade2[50] = "MANAUS";
    int PopulacaoMaceio = 957916, PopulacaoManaus = 2279686;
    float AreaemKmMaceio = 509320.00, AreaemKmManaus = 11401.092;
    float PibMaceio = 27484016.31, PibManaus = 103281436.041;
    int PontTuristMaceio = 30, PontTuristManaus = 12;
    
    //Instruções ao usuário
    printf("Atenção usuário, utilize letra maiúscula e ponto como separador de dezenas!!!\n");

    //Solicitando ao 1º jogador para digitar as informações da carta 1
    printf("\nJogador número 1, digite as informações da carta 1:\n");
    printf("\nDigite a letra que representa o Estado: ");
    scanf(" %c",&EstadoAlagoas);
    printf("Digite o código da carta: ");
    scanf("%s",CodigoCarta1);
    printf("Digite nome da cidade: ");
    scanf("%s",NomeCidade1);
    printf("Digite o tamanho da população: ");
    scanf("%d",&PopulacaoMaceio);
    printf("Digite o o tamanho do território: ");
    scanf("%f",&AreaemKmMaceio);
    printf("Digite o Pib da cidade: ");
    scanf("%f",&PibMaceio);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&PontTuristMaceio);

    //Impressão da 1ª carta registrada
    printf("\nA carta 1 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAlagoas);
    printf("Código do Estado: %s\n",CodigoCarta1);
    printf("Nome da cidade: %s\n",NomeCidade1);
    printf("População: %d\n",PopulacaoMaceio);
    printf("Área: %.2f Km²\n",AreaemKmMaceio);
    printf("PIB: %.2f milhões de reais\n",PibMaceio/1000000);//Transformando reais para milhões de reais
    printf("Número de pontos turísticos: %d\n",PontTuristMaceio);

    //Solicitando ao 2º jogador para digitar as informações da carta 2
    printf("\nJogador número 2, digite as informações da carta 2:\n");
    printf("\nDigite a letra que representa o Estado: ");
    scanf(" %c",&EstadoAmazonas);
    printf("Digite o código da carta: ");
    scanf("%s",CodigoCarta2);
    printf("Digite nome da cidade: ");
    scanf("%s",NomeCidade2);
    printf("Digite o tamanho da população: ");
    scanf("%d",&PopulacaoManaus);
    printf("Digite o tamanho do território: ");
    scanf("%f",&AreaemKmManaus);
    printf("Digite o Pib da cidade: ");
    scanf("%f",&PibManaus);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&PontTuristManaus);

    //Impressão da 2ª carta registrada
    printf("\nA carta 2 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAmazonas);
    printf("Código do Estado: %s\n",CodigoCarta2);
    printf("Nome da cidade: %s\n",NomeCidade2);
    printf("População: %d\n",PopulacaoManaus);
    printf("Área: %.2f Km²\n",AreaemKmManaus);
    printf("PIB: %.2f milhões de reais\n",PibManaus/1000000);//Transformando reais para milhões de reais
    printf("Número de pontos turísticos: %d\n",PontTuristManaus);

    return 0;
}
