#include<stdio.h>
int main(){

    // Declaração de variáveis Carta 1
char estado1 ='';
char codigoCarta1[20] = ""; 
char nomeCidade1[20] ="";
int populacaoCidade1 = 0;
float area1 = 0;
float PIB1 = 0;
int pontosTuristicos1 = 0;

// Declaração de variáveis Carta 2
char estado2 ='';
char codigoCarta2[20] = ""; 
char nomeCidade2[20] ="";
int populacaoCidade2 = 0;
float area2 = 0;
float PIB2 = 0;
int pontosTuristicos2= 0;

//Entrada de dados carta 1

printf ("Carta 1\n");
printf("Digite a letra que represente seu estado, de A a H:\n");
scanf("%c",&estado1);//armazena o que o usuário digitou na variável "estado1".
printf("Digite o código da carta (letra do estado seguida do número):\n");
scanf("%s",codigoCarta1);// armazena código da carta na variavel "codigoCarta1".
printf("Digite o nome da cidade:\n");
scanf("%s",nomeCidade1);// armazena nome da cidade na variável "nomeCidade1".
printf("Digite a população da cidade:\n");
scanf("%d",&populacaoCidade1);// armazena população mvariável "populacaoCidade1".
printf("Digite a área da cidade:\n");
scanf("%f",&area1);// armazena área da cidade na variável "area1".
printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB1);// armazena PIB da cidade na variavel "PIB1"
printf("Digite o número de pontos turísticos:\n\n");
scanf("%d", &pontosTuristicos1); // armazena pontos turisticos na variavel "pontosTuristicos1";

//Entrada de dados Carta 2
printf("\n\nCarta 2\n");// Usuário irá digitar os dados da carta 2.
printf("Digite a letra que represente seu estado, de A a H:\n\n");
scanf(" %c",&estado2);//armazena o que o usuário digitou na variável "estado2".
printf("Digite o código da carta (letra do estado seguida do número):\n");
scanf("%s",codigoCarta2);// armazena código da carta na variavel "codigoCarta2".
printf("Digite o nome da cidade:\n");
scanf("%s",nomeCidade2);// armazena nome da cidade na variável "nomeCidade2".
printf("Digite a população da cidade:\n");
scanf("%d",&populacaoCidade2);// armazena população mvariável "populacaoCidade2".
printf("Digite a área da cidade:\n");
scanf("%f",&area2);// armazena área da cidade na variável "area2".
printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB2);// armazena PIB da cidade na variavel "PIB2"
printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosTuristicos2); // armazena pontos turisticos na variavel "pontosTuristicos2"


//Saída dos dados da Carta 1
printf("\nCarta 1\n");
printf("Estado: %c\n",estado1);// imprime a letra referente ao estado 1 (carta 1);
printf("Código: %s\n",codigoCarta1);// imprime o código referente a carta 1;
printf("Nome da cidade: %s\n",nomeCidade1);// imprime o nome da cidade 1 (carta 1)
printf("População: %d habitantes\n",populacaoCidade1); // imprime a população da cidade 1 (carta 1)
printf("Área:%0.f km^2\n",area1); // imprime a área da cidade 1 (carta 1)
printf("PIB: %0.f bilhões de reais\n",PIB1);// imprime o PIB da cidade 1 (carta 1)
printf("Número de pontos turísticos: %d\n",pontosTuristicos1); //imprime o número de pontos turísticos da cidade 1

//Saída dos dados da Carta 2
printf("\nCarta 2\n");
printf("Estado: %c\n",estado2);// imprime a letra referente ao estado 2 (carta 2);
printf("Código: %s\n",codigoCarta2);// imprime o código referente a carta 2;
printf("Nome da cidade: %s\n",nomeCidade2);// imprime o nome da cidade 2 (carta 2)
printf("População: %d habitantes\n",populacaoCidade2); // imprime a população da cidade 2 (carta 2)
printf("Área:%0.f km^2\n",area2); // imprime a área da cidade 2 (carta 2)
printf("PIB: %0.f bilhões de reais\n",PIB2);// imprime o PIB da cidade 2 (carta 2)
printf("Número de pontos turísticos: %d\n",pontosTuristicos2); //imprime o número de pontos turisticos da cidade 2 (carta 2)




return 0;
}#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
