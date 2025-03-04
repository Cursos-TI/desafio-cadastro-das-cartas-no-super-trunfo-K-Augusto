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

    //Variáveis declaradas de cada carta registrada - Total de duas cartas
    char EstadoAlagoas = 'A',EstadoAmazonas ='B';
    char CodigoCarta1[4] = "A01", CodigoCarta2[4] = "B02";
    char NomeCidade1[50] = "MACEIO", NomeCidade2[50] = "MANAUS";
    unsigned long int PopulacaoMaceio = 957916, PopulacaoManaus = 2279686;
    float AreaemKmMaceio = 509320.00, AreaemKmManaus = 11401.092;
    float PibMaceio = 27484016.31, PibManaus = 103281436.041;//Pib declarado em reais
    int PontTuristMaceio = 30, PontTuristManaus = 12;
    
    //Declaração das variáveis que armazenarão a densidade populacional e Pib per capita de Maceio e Manaus
    float DensPopMaceio;
    float DensPopManaus;
    float PibPerCapMaceio;
    float PibPerCapMManaus;

    //Declaração variáveis densidade populacional invertida Maceio e Manaus
    float DensPopInvMaceio; 
    float DensPopInvManaus;  

    //Declaração variáveis Super Poder Maceio e Manaus
    float SuperPoderMaceio;
    float SuperPoderManaus;

    //Declaração de variáveis que receberão os resultados das comparações
    int ResultPop, ResultArea, ResultPib, ResultPonTur, ResultDensPop, ResultPibPerCap, ResultSupPoder;

    //Cálculo densidade demográfica e Pib per capita Maceio
    DensPopMaceio = (float)PopulacaoMaceio/ AreaemKmMaceio; //Conversão explicita para igualar o tipo dos números da divisão
    PibPerCapMaceio = PibMaceio / PopulacaoMaceio; 

    //Cálculo densidade demográfica e Pib per capita Manaus
    DensPopManaus = (float)PopulacaoManaus / AreaemKmManaus; //Conversão explicita para igualar o tipo dos números da divisão
    PibPerCapMManaus = PibManaus / PopulacaoManaus; 

    //Cálculo densidade populacionalinvertida Maceio e Manaus
    DensPopInvMaceio = (float)1/DensPopMaceio;
    DensPopInvManaus = (float)1/DensPopManaus; 

    //Cálculo do Super Poder Maceio 
    SuperPoderMaceio = (float)PopulacaoMaceio + AreaemKmMaceio + PibMaceio + PibPerCapMaceio + DensPopInvMaceio + (float)PontTuristMaceio;

    //Cálculo do Super Poder Manaus
    SuperPoderManaus = (float)PopulacaoManaus + AreaemKmManaus + PibManaus + PibPerCapMManaus + DensPopInvManaus + (float)PontTuristManaus; 

    //Comparação das cartas
    ResultPop = PopulacaoMaceio > PopulacaoManaus;
    ResultArea = AreaemKmMaceio > AreaemKmManaus;
    ResultPib = PibMaceio > PibManaus;
    ResultPonTur = PontTuristMaceio > PontTuristManaus;
    ResultDensPop = DensPopInvMaceio < DensPopInvManaus;
    ResultPibPerCap = PibPerCapMaceio > PibPerCapMManaus;
    ResultSupPoder = SuperPoderMaceio > SuperPoderManaus;

    //Instruções para o usuário preencher as informações
    printf("Atenção usuário, utilize letra maiúscula, sem acento e ponto como separador de dezenas!!!\n");

    //Solicitação 1º jogador para digitar as informações da 1ª carta
    printf("\nJogador número 1, digite as informações da sua carta:\n");//Inicio com \n para não imprimir colado com a frase anterior

    //Solicitação para digitar a letra que representa o Estado 1 (Alagoas) 
    printf("\nDigite a letra que representa o Estado: ");
    scanf(" %c",&EstadoAlagoas); //Espaço antes do especificador de formato para tirar erro de leitura

    //Solicitação do código da carta 1
    printf("Digite o código da carta: ");
    scanf("%s",CodigoCarta1);

    //Solicitação do nome da cidade 1 - Maceio
    printf("Digite nome da cidade: ");
    scanf("%s",NomeCidade1);

    //Solicitação do tamanho da população de Maceio
    printf("Digite o tamanho da população: ");
    scanf("%lu",&PopulacaoMaceio);

    //Solicitação da Área em km² de Maceio
    printf("Digite o tamanho do território: ");
    scanf("%f",&AreaemKmMaceio);

    //Solicitação do Pib da cidade de Maceio
    printf("Digite o Pib da cidade: ");
    scanf("%f",&PibMaceio);

    //Solicitação do número de pontos turísticos de Maceio
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&PontTuristMaceio);

    //Impressão da 1ª carta registrada
    printf("\nA carta 1 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAlagoas);
    printf("Código do Estado: %s\n",CodigoCarta1);
    printf("Nome da cidade: %s\n",NomeCidade1);
    printf("População: %lu\n",PopulacaoMaceio);
    printf("Área: %.2f Km²\n",AreaemKmMaceio);
    printf("PIB: %.2f milhões de reais\n",PibMaceio/1000000);//Transformando reais para milhões de reais
    printf("Número de pontos turísticos: %d\n",PontTuristMaceio);
    printf("Densidade Populacional: %.2f hab/km²\n",DensPopMaceio);
    printf("Pib per capita: %.2f reais\n",PibPerCapMaceio);

    //Solicitando ao 2º jogador para digitar as informações da 2ª carta 
    printf("\nJogador número 2, digite as informações da sua carta:\n");//Inicio com \n para não imprimir colado com a frase anterior
    
    //Solicitação para digitar a letra que representa o Estado 1 (Amazonas) 
    printf("\nDigite a letra que representa o Estado: ");
    scanf(" %c",&EstadoAmazonas);//Espaço antes do especificador de formato para tirar erro de leitura
    
    //Solicitação do código da carta 2
    printf("Digite o código da carta: ");
    scanf("%s",CodigoCarta2);
    
    //Solicitação do nome da cidade 2 - Manaus
    printf("Digite nome da cidade: ");
    scanf("%s",NomeCidade2);
    
    //Solicitação do tamanho da população de Manaus
    printf("Digite o tamanho da população: ");
    scanf("%lu",&PopulacaoManaus);
    
    //Solicitação da Área em km² de Manaus
    printf("Digite o tamanho do território: ");
    scanf("%f",&AreaemKmManaus);
    
    //Solicitação do Pib da cidade de Manaus
    printf("Digite o Pib da cidade: ");
    scanf("%f",&PibManaus);
    
    //Solicitação do número de pontos turísticos de Manaus
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&PontTuristManaus);

    //Impressão da 2ª carta registrada
    printf("\nA carta 2 possui os atributos.:\n");
    printf("\nEstado: %c\n",EstadoAmazonas);
    printf("Código do Estado: %s\n",CodigoCarta2);
    printf("Nome da cidade: %s\n",NomeCidade2);
    printf("População: %lu\n",PopulacaoManaus);
    printf("Área: %.2f Km²\n",AreaemKmManaus);
    printf("PIB: %.2f milhões de reais\n",PibManaus/1000000);//Transformando reais para milhões de reais
    printf("Número de pontos turísticos: %d\n",PontTuristManaus);
    printf("Densidade Populacional: %.2f hab/km²\n",DensPopManaus);
    printf("Pib per capita: %.2f reais\n",PibPerCapMManaus);

    //Impressão da comparação das cartas
    printf("\nComparação das cartas:\n");
    printf("\nPopulação: %d\n",ResultPop);
    printf("Área: %d\n",ResultArea);
    printf("PIB: %d\n",ResultPib);
    printf("Pontos Turísticos: %d\n",ResultPonTur);
    printf("Densidade Populacional: %d\n",ResultDensPop);
    printf("PIB per Capita: %d\n",ResultPibPerCap);
    printf("Super Poder: %d\n",ResultSupPoder);

    return 0;
    
}