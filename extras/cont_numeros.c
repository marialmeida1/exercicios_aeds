#include <stdio.h>

int cont(int);

int main(void){
  printf("%d", cont(1000));
}

int cont(int number){
  if(number == 0){
    return 0;
  } else {;
    return 1 + cont(number/10);;
  }
}