#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

// Estrutura para armazenar os dados de uma cidade
int main () {
typedef struct {
    char estado[TAM_NOME];
    char codigo[TAM_NOME];
    char nome[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularIndicadores(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

// Função para comparar dois atributos e determinar o vencedor
void compararAtributos(Carta c1, Carta c2, int atributo1, int atributo2) {
    float valor1_1, valor2_1, valor1_2, valor2_2;
    int soma1 = 0, soma2 = 0;
    const char* nomeAtributo1;
    const char* nomeAtributo2;

    // Atributo 1
    switch (atributo1) {
        case 1: // População
            valor1_1 = c1.populacao;
            valor2_1 = c2.populacao;
            nomeAtributo1 = "População";
            break;
        case 2: // Área
            valor1_1 = c1.area;
            valor2_1 = c2.area;
            nomeAtributo1 = "Área";
            break;
        case 3: // PIB
            valor1_1 = c1.pib;
            valor2_1 = c2.pib;
            nomeAtributo1 = "PIB";
            break;
        case 4: // Densidade Populacional
            valor1_1 = c1.densidade_populacional;
            valor2_1 = c2.densidade_populacional;
            nomeAtributo1 = "Densidade Populacional";
            break;
        case 5: // PIB per Capita
            valor1_1 = c1.pib_per_capita;
            valor2_1 = c2.pib_per_capita;
            nomeAtributo1 = "PIB per Capita";
            break;
        default:
            printf("Atributo 1 inválido.\n");
            return;
    }

    // Atributo 2
    switch (atributo2) {
        case 1: // População
            valor1_2 = c1.populacao;
            valor2_2 = c2.populacao;
            nomeAtributo2 = "População";
            break;
        case 2: // Área
            valor1_2 = c1.area;
            valor2_2 = c2.area;
            nomeAtributo2 = "Área";
            break;
        case 3: // PIB
            valor1_2 = c1.pib;
            valor2_2 = c2.pib;
            nomeAtributo2 = "PIB";
            break;
        case 4: // Densidade Populacional
            valor1_2 = c1.densidade_populacional;
            valor2_2 = c2.densidade_populacional;
            nomeAtributo2 = "Densidade Populacional";
            break;
        case 5: // PIB per Capita
            valor1_2 = c1.pib_per_capita;
            valor2_2 = c2.pib_per_capita;
            nomeAtributo2 = "PIB per Capita";
            break;
        default:
            printf("Atributo 2 inválido.\n");
            return;
    }

    // Comparação do primeiro atributo
    printf("\nComparando %s:\n", nomeAtributo1);
    printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.estado, valor1_1);
    printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.estado, valor2_1);
    if (atributo1 == 4) { // Densidade Populacional
        if (valor1_1 < valor2_1) {
            printf("Carta 1 venceu!\n");
            soma1++;
        } else if (valor1_1 > valor2_1) {
            printf("Carta 2 venceu!\n");
            soma2++;
        } else {
            printf("Empate!\n");
        }
    } else {
        if (valor1_1 > valor2_1) {
            printf("Carta 1 venceu!\n");
            soma1++;
        } else if (valor1_1 < valor2_1) {
            printf("Carta 2 venceu!\n");
            soma2++;
        } else {
            printf("Empate!\n");
        }
    }

    // Comparação do segundo atributo
    printf("\nComparando %s:\n", nomeAtributo2);
    printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.estado, valor1_2);
    printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.estado, valor2_2);
    if (atributo2 == 4) { // Densidade Populacional
        if (valor1_2 < valor2_2) {
            printf("Carta 1 venceu!\n");
            soma1++;
        } else if (valor1_2 > valor2_2) {
            printf("Carta 2 venceu!\n");
            soma2++;
        } else {
            printf("Empate!\n");
        }
    } else {
        if (valor1_2 > valor2_2) {
            printf("Carta 1 venceu!\n");
            soma1++;
        } else if (valor1_2 < valor2_2) {
            printf("Carta 2 venceu!\n");
            soma2++;
        } else {
            printf("Empate!\n");
        }
    }

    // Resultado final
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %d\n", soma1);
    printf("Carta 2: %d\n", soma2);
    if (soma1 > soma2) {
        printf("\nCarta 1 (%s) venceu a rodada!\n", c1.nome);
    } else if (soma1 < soma2) {
        printf("\nCarta 2 (%s) venceu a rodada!\n", c2.nome);
    } else {
        printf("\nEmpate na rodada!\n");
    }
}

int main() {
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 
::contentReference[oaicite:0]{index=0} 
}
