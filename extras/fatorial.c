#include <stdio.h>

int fat(int n){
    if(n == 1){
        return 1;
    }
    return n * fat(n-1);
}
  

int main(void){
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", n);
    printf("%d", fat(4));
}