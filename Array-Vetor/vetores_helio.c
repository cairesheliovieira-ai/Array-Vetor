/* ================================================================
 * Atividade: Manipulacao de Vetores em C
 * Estudante: Helio Junior Vieira Caires
 *
 * Objetivo: ler 20 numeros inteiros digitados pelo usuario,
 * guarda-los em um vetor e, a partir dele, calcular:
 *   - soma dos multiplos de 3
 *   - media dos numeros pares
 *   - quantidade de positivos e negativos
 *   - maior e menor valor
 *   - impressao de todos os numeros digitados
 * ================================================================ */

#include <stdio.h>

#define QTD_ELEMENTOS 20  /* quantidade fixa de numeros exigida no enunciado */

int main(void) {
    int lista[QTD_ELEMENTOS];

    int acumuladorMult3   = 0;  /* acumula os valores divisiveis por 3 */
    int acumuladorPares   = 0;  /* acumula os valores pares, para tirar a media depois */
    int totalPares        = 0;  /* conta quantos pares foram encontrados */
    int totalPositivos    = 0;
    int totalNegativos    = 0;
    int valorMaximo;
    int valorMinimo;
    int contador;

    /* ---------------------------------------------------------
     * ETAPA 1: leitura dos 20 numeros, usando while
     * --------------------------------------------------------- */
    printf("---- Cadastro dos %d numeros ----\n", QTD_ELEMENTOS);

    contador = 0;
    while (contador < QTD_ELEMENTOS) {
        printf("Numero %2d: ", contador + 1);
        scanf("%d", &lista[contador]);
        contador++;
    }

    /* O maior e o menor comecam valendo o primeiro item do vetor,
     * e vao sendo atualizados conforme percorremos o restante. */
    valorMaximo = lista[0];
    valorMinimo = lista[0];

    /* ---------------------------------------------------------
     * ETAPA 2: percorre o vetor uma unica vez, tambem com while,
     * para fazer todos os calculos e verificacoes
     * --------------------------------------------------------- */
    contador = 0;
    while (contador < QTD_ELEMENTOS) {

        /* multiplo de 3 -> soma no acumulador correspondente */
        if (lista[contador] % 3 == 0) {
            acumuladorMult3 = acumuladorMult3 + lista[contador];
        }

        /* numero par -> soma e conta, para depois calcular a media */
        if (lista[contador] % 2 == 0) {
            acumuladorPares = acumuladorPares + lista[contador];
            totalPares++;
        }

        /* classificacao em positivo/negativo (zero fica de fora dos dois) */
        if (lista[contador] > 0) {
            totalPositivos++;
        } else if (lista[contador] < 0) {
            totalNegativos++;
        }

        /* atualizacao do maior valor ja visto */
        if (lista[contador] > valorMaximo) {
            valorMaximo = lista[contador];
        }

        /* atualizacao do menor valor ja visto */
        if (lista[contador] < valorMinimo) {
            valorMinimo = lista[contador];
        }

        contador++;
    }

    /* ---------------------------------------------------------
     * ETAPA 3: exibicao dos resultados
     * --------------------------------------------------------- */
    printf("\n---- Resultados obtidos ----\n");
    printf("Soma dos numeros multiplos de 3.....: %d\n", acumuladorMult3);

    /* so calcula a media se houver pelo menos um numero par,
     * para nao correr o risco de dividir por zero */
    if (totalPares > 0) {
        printf("Media dos numeros pares.............: %.2f\n",
               (float) acumuladorPares / (float) totalPares);
    } else {
        printf("Media dos numeros pares.............: nenhum numero par foi digitado\n");
    }

    printf("Quantidade de numeros positivos.....: %d\n", totalPositivos);
    printf("Quantidade de numeros negativos.....: %d\n", totalNegativos);
    printf("Maior valor encontrado..............: %d\n", valorMaximo);
    printf("Menor valor encontrado..............: %d\n", valorMinimo);

    /* ---------------------------------------------------------
     * ETAPA 4: impressao de todos os numeros digitados, com while
     * --------------------------------------------------------- */
    printf("\n---- Numeros digitados, na ordem ----\n");
    contador = 0;
    while (contador < QTD_ELEMENTOS) {
        printf("%d", lista[contador]);
        if (contador < QTD_ELEMENTOS - 1) {
            printf(", ");
        }
        contador++;
    }
    printf("\n");

    return 0;
}
