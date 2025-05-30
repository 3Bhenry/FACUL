#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void calcular_dados(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

void comparar_cartas(Carta c1, Carta c2) {
    // Defina o atributo a ser comparado
    // 1: População
    // 2: Área
    // 3: PIB
    // 4: Densidade Populacional
    // 5: PIB per Capita
    int atributo = 1;

    printf("\nComparando cartas (Atributo: ");
    switch (atributo) {
        case 1: printf("População):\n"); break;
        case 2: printf("Área):\n"); break;
        case 3: printf("PIB):\n"); break;
        case 4: printf("Densidade Populacional):\n"); break;
        case 5: printf("PIB per Capita):\n"); break;
        default: printf("Atributo inválido):\n"); return;
    }

    printf("Carta 1 - %s (%s): %d\n", c1.nome, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d\n", c2.nome, c2.estado, c2.populacao);

    int vencedor = 0; // 0: Empate, 1: Carta 1, 2: Carta 2

    switch (atributo) {
        case 1: // População
            if (c1.populacao > c2.populacao) vencedor = 1;
            else if (c1.populacao < c2.populacao) vencedor = 2;
            break;
        case 2: // Área
            if (c1.area > c2.area) vencedor = 1;
            else if (c1.area < c2.area) vencedor = 2;
            break;
        case 3: // PIB
            if (c1.pib > c2.pib) vencedor = 1;
            else if (c1.pib < c2.pib) vencedor = 2;
            break;
        case 4: // Densidade Populacional
            if (c1.densidade_populacional < c2.densidade_populacional) vencedor = 1;
            else if (c1.densidade_populacional > c2.densidade_populacional) vencedor = 2;
            break;
        case 5: // PIB per Capita
            if (c1.pib_per_capita > c2.pib_per_capita) vencedor = 1;
            else if (c1.pib_per_capita < c2.pib_per_capita) vencedor = 2;
            break;
    }

    switch (vencedor) {
        case 0:
            printf("Resultado: Empate!\n");
            break;
        case 1:
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            break;
        case 2:
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            break;
    }
}

int main() {
    Carta carta1 = {"SP", "1A", "São Paulo", 12300000, 1521.11, 700000, 100, 0, 0};
    Carta carta2 = {"RJ", "1B", "Rio de Janeiro", 6700000, 1182.3, 600000, 80, 0, 0};

    // Calcular densidade populacional e PIB per capita
    calcular_dados(&carta1);
    calcular_dados(&carta2);

    // Comparar as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}
