#include <stdio.h>

int main(void) {
  FILE *arq01;
  char carac, string[500], c;
  int i, j = 0;
  arq01 = popen ("arq01.txt", "r+");
  if(arq01 == NULL){
    printf("Falha ao abrir o arquivo");
    fclose(arq01);
    return 0;
  }
  printf("Escreva uma frase para ser gravada no arquivo: ");
  fgets(string, 500, stdin);
  fflush(stdin);
  for(i = 0; string[i] != '\0'; i++){
    fputc(string[i], arq01);
  }
  
  printf("Escreva um caracter: ");
  scanf("%c", &carac);
  
  while(c = (fgetc(arq01)) != EOF){
    if(c == carac){
      j++;
    }
  }
  fclose (arq01);
  return 0;
}