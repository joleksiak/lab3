#include <stdio.h>

int silnia=1;
   int i=1;
   int n=1;
   int main() {

  while (i<10) {
    printf("Podaj liczbę: ");
    silnia=silnia*i;
    printf("\nSilnia tej liczby to: ");
    i++;
  }

  return 0;

}

