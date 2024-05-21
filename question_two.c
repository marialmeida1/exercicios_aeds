#include <stdio.h>

void cad_produtos(int, int M, int[][M]);
void sort_numeros(int, int[]);
void calc_pontos(int, int M, int, int[][M], int[], int[]);
void imprime_pontos(int, int[]);

int main(void) {

    // Declaração das constantes
    int n, m;
    printf("Quantas cartelas: ");
    scanf("%d", &n);
    printf("Quantas numeros nas cartelas: ");
    scanf("%d", &m);
    int u = n * m;

    // Declaração das matrizes
    int cartelas[n][m];
    int sort[u];
    int pontos[n];

    // Funções
    cad_produtos(n, m, cartelas);
    /*TESTE int sort[4] = {0, 83, 86, 0}; TESTE*/
    sort_numeros(u, sort);
    calc_pontos(n, m, u, cartelas, sort, pontos);
    imprime_pontos(n, pontos);
}

// Cadastra cartelas e seu valores
void cad_produtos(int N, int M, int cartelas[][M]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cartelas[i][j] = rand()%100;
        }
    }
}


// Insere os números que foram sorteados
void sort_numeros(int U, int sort[]){
    for (int i = 0; i < U; i++)
    {
        sort[i] = rand()%100;
    }
}

void calc_pontos(int N, int M, int U, int cartelas[][M], int sort[], int pontos[]){
    for (int i = 0; i < N; i++)
    {
        int pt = 0;
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < U; k++)
            {
                if(cartelas[i][j] == sort[k]){
                    pt++;
                }
            }
        }
        pontos[i] = pt;
    }
}

void imprime_pontos(int N, int pontos[]){
    for (int i = 0; i < N; i++)
    {
        printf("%d cartela: %d\n", (i+1), pontos[i]);
    } 
}