#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
//declaração das variáveis
char codigo[5]; // variável do código
int populacao; // variável da população
float area; // variável da área
float pib; //variável do PIB
int npontosturisticos; //variavel número de pontos turísticos

//Entrada de dados
printf("Qual o Código da carta? ");
scanf("%s", codigo);

printf("Qual a quantidade de pessoas possui esta cidade? ");
scanf("%d", &populacao);
printf("Qual a área territorial desta cidade? ");
scanf("%f", &area);
printf("Qual o pib dessa cidade? ");
scanf("%f", &pib);
printf("Quantos pontos turísticos possui a cidade desta carta?");
scanf("%d", &npontosturisticos);

//Saída de dados
printf("\n"); //comando para pular linha
printf("Cartas Super Trunfo");
printf("\n");
printf("O código desta carta é: %s\n", codigo); //vai demonstrar o código da carta

printf("População: %d\n", populacao); //demonstrar qual é o número de pessoas da cidade
printf("Área: %f\n", area); // demonstrar qual é a área da cidade
printf("PIB: %f\n", pib); // demonstrar qual o pib da cidade
printf("Números de Pontos turísticos: %d", npontosturisticos); // demonstrar quantos pontos turísticos possui a cidadeA






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
