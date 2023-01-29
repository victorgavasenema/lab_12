#include <stdio.h>

int main(void) {
  FILE *arq;
  int i;
  char carac[200];
  arq = fopen("arq.txt", "w");
  printf("Escreva uma frase: ");
  fgets(carac, 200, stdin);
  for(i = 0; carac[i] != '0'; i ++){
    fputc(carac[i], arq);
  }
  fclose(arq);
  return 0;
}