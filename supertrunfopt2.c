#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char Estado1[3];
    char Codigo1[4];
    char Cidade1[30];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Variáveis da segunda carta
    char Estado2[3];
    char Codigo2[4];
    char Cidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf("%s", Estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", Cidade1); // lê até o enter

    printf("Digite o número de habitantes da primeira cidade: ");
    scanf("%d", &Populacao1);

    printf("Área da primeira cidade: ");
    scanf("%f", &Area1);

    printf("PIB da primeira cidade: ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos da primeira carta: ");
    scanf("%d", &PontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf("%s", Estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite o número de habitantes da segunda cidade: ");
    scanf("%d", &Populacao2);

    printf("Área da segunda cidade: ");
    scanf("%f", &Area2);

    printf("PIB da segunda cidade: ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos da segunda carta: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos
    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;

    float PIBperCapita1 = PIB1 / Populacao1;
    float PIBperCapita2 = PIB2 / Populacao2;

    // Comparação - atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", Cidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", Cidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
