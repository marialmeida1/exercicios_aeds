#include <stdio.h>
#include <stdlib.h>

void preenche(int, int*);
void mostra(int, int*);

int main(void) {

    int n;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *) malloc(n*sizeof(int));

    preenche(n, ptr);
    mostra(n, ptr);

}

void preenche(int n, int *ptr) {
    for(int i=0; i<n; i++){
        *(ptr+i) = rand()%100;
    }
}

void mostra(int n, int *ptr) {
    for(int i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
}