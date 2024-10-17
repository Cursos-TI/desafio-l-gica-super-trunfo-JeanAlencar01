#include <stdio.h>

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

    int Pontos_Turísticos1, População1;
    float Área1, PIB1;
    char Código_Carta1[10];
    char Pais1[25];
    char Estado1[25]; 
    char Cidade1[50];
    float Densidade_Populacional1 = População1 / Área1;
    float PIB_per_capita1 = PIB1 / População1;
    float superPoder1 = (Pontos_Turísticos1 + População1 + Área1 + PIB1);
    
   
    int Pontos_Turísticos2, População2;
    float Área2, PIB2;
    char Codigo_Carta2[10];
    char Pais2[25];
    char Estado2[25]; 
    char Cidade2[50];
    float Densidade_Populacional2 = População2 / Área2;
    float PIB_per_capita2 = PIB2 / População2;
    float superPoder2 = (Pontos_Turísticos2 + População2 + Área2 + PIB2);

    char CidadeVencedora [50];

        //cadastro da 1a carta para comparação
        printf ("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n Cada estado terá quatro cidades, numeradas de 1 a 4.\n A combinação da letra do estado e o número da cidade define o código da carta\n (por exemplo, A01, A02 , B01, B02).\n");

        printf ("Digite o Estado\n");
        scanf ("%s", &Estado1);

        printf ("Digite o Código da sua Carta\n");
        scanf ("%s", &Código_Carta1);

        printf ("Digite o nome da Cidade\n");
        scanf ("%s", &Cidade1);
        
        printf ("Digite a População\n");
        scanf ("%d", &População1);

        printf ("Digite a Área km²\n");
        scanf ("%f", &Área1);

        printf ("Digite o PIB\n");
        scanf ("%f", &PIB1);

        printf ("Digite o Número de Pontos Turísticos \n");
        scanf ("%d", &Pontos_Turísticos1);

        Densidade_Populacional1 = (float) População1 / Área1; 
        PIB_per_capita1 = (float) PIB1 / População1;


        printf ("Sua Carta foi Cadastrada com Sucesso!\n");
        
        printf ("Estado: %s\n", Estado1);
        printf ("Código da Carta: %s\n",Código_Carta1);
        printf ("Nome da Cidade: %s\n", Cidade1);
        printf ("População: %d\n", População1);
        printf ("Área km²: %.2f\n", Área1);
        printf ("PIB: %.2f\n", PIB1);
        printf ("Número de Pontos Turísticos: %d\n", Pontos_Turísticos1);
        printf ("Densidade Populacional: %f\n", Densidade_Populacional1);
        printf ("PIB per Capita: %f\n", PIB_per_capita1);
        printf ("Super Poder: %f\n", superPoder1);
    
        
        //cadastro da 2a carta para comparação
        printf ("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n Cada estado terá quatro cidades, numeradas de 1 a 4.\n A combinação da letra do estado e o número da cidade define o código da carta\n (por exemplo, A01, A02 , B01, B02).\n");

        printf ("Digite o Estado\n");
        scanf ("%s", &Estado2);

        printf ("Digite o Código da sua Carta\n");
        scanf ("%s", &Codigo_Carta2);

        printf ("Digite o nome da Cidade\n");
        scanf ("%s", &Cidade2);
        
        printf ("Digite a População\n");
        scanf ("%d", &População2);

        printf ("Digite a Área km²\n");
        scanf ("%f", &Área2);

        printf ("Digite o PIB\n");
        scanf ("%f", &PIB2);

        printf ("Digite o Número de Pontos Turísticos \n");
        scanf ("%d", &Pontos_Turísticos2);

        Densidade_Populacional2 = (float) População2 / Área2; 
        PIB_per_capita2 = (float) PIB2 / População2;


        printf ("Sua Carta foi Cadastrada com Sucesso!\n");
        
        printf ("Estado: %s\n", Estado2);
        printf ("Código da Carta: %s\n",Codigo_Carta2);
        printf ("Nome da Cidade: %s\n", Cidade2);
        printf ("População: %d\n", População2);
        printf ("Área km²: %.2f\n", Área2);
        printf ("PIB: %.2f\n", PIB2);
        printf ("Número de Pontos Turísticos: %d\n", Pontos_Turísticos2);
        printf ("Densidade Populacional: %f\n", Densidade_Populacional2);
        printf ("PIB per Capita: %f\n", PIB_per_capita2);
        printf ("Super Poder: %f\n", superPoder2);
    
        //comparação das propriedades das cartas

        printf("a população da Carta (%s) é maior que a população da Carta (%s)? %d\n",
                             Código_Carta1, Codigo_Carta2,
                             (População1) > (População2));
        
        printf("a Área da Carta (%s) é maior que a Área da Carta (%s)? %d\n",
                             Código_Carta1, Codigo_Carta2,
                             (Área1) > (Área2));

        printf("o PIB da Carta (%s) é maior que o PIB da Carta (%s)? %d\n",
                             Código_Carta1, Codigo_Carta2,
                             (PIB1) > (PIB2));

        printf("o Número de Pontos Turísticos da Carta (%s) é maior que o Número de Pontos Turísticos (%s)? %d\n",
                             Código_Carta1, Codigo_Carta2,
                             (Pontos_Turísticos1) > (Pontos_Turísticos2));

        printf("o Super Poder da Carta (%s) é maior que o Super Poder da Carta (%s)? %d\n",
                             Código_Carta1, Codigo_Carta2,
                             (superPoder1) > (superPoder2));

        printf("a Densidade Populacional da Carta (%s) é Menor que a Densidade Populacional da Carta (%s) %d\n",
                            Código_Carta1, Codigo_Carta2,
                            (Densidade_Populacional1) < (Densidade_Populacional2));
                        

    if (População1 > População2) {
        printf("Cidade 1 venceu por ter maior população.\n");
    } else {
        printf("Cidade 2 venceu por ter maior população.\n");
    }

    if (Área1 > Área2) {
        printf("Cidade 1 venceu por ter maior Área km².\n");
    } else {
        printf("Cidade 2 venceu por ter maior Área km².\n");
    }

    if (PIB1 > PIB2) {
        printf("Cidade 1 venceu por ter maior PIB.\n");
    } else {
        printf("Cidade 2 venceu por ter maior PIB.\n");
    }

    if (Pontos_Turísticos1 > Pontos_Turísticos2) {
        printf("Cidade 1 venceu por ter mais Pontos Turísticos.\n");
    } else {
        printf("Cidade 2 venceu por ter mais Pontos Turísticos.\n");
    }

    if (Densidade_Populacional1 < Densidade_Populacional2) {
        printf("Cidade 1 venceu por ter menor Densidade Populacional.\n");
    } else {
        printf("Cidade 2 venceu por ter menor Densidade Populacional.\n");
    }


    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Cidade 1 venceu por ter maior PIB per capita.\n");
    } else {
        printf("Cidade 2 venceu por ter maior PIB per capita.\n");
    }

    if (superPoder1 > superPoder2) {
        printf("Cidade 1 venceu por ter maior Super Poder.\n");
    } else {
        printf("Cidade 2 venceu por ter maior Super Poder.\n");
    }

    printf("A cidade vencedora é: %s\n", CidadeVencedora);
    return 0;
}
