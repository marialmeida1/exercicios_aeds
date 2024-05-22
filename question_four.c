#include <stdio.h>

int inverte(int);

int main(void) {

    int number;
    printf("Escreva o numero: ");
    scanf("%d", &number);
    inverte(number);
}

int inverte(int number){
    if(number == 0){
        return;
    }

    printf("%d", number%10);
    inverte(number/10);
}