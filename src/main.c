/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

//Marcelo Beinisis Grinbaum
//RA:173577

#include <stdio.h>
#include <string.h>

int main() {
  
  char texto[10000];
  int x=0, tamanho, i=0;
  
  fgets(texto, 10000, stdin);
  tamanho= strlen(texto);
  
  while (i<tamanho) {
    if (texto[i] == ' ' || texto[i] == '.' || texto[i] == ',' || texto[i] == '!' || texto[i] == '\n' || texto[i] == '-' || texto[i] == ':') {
      if ( (texto[i-1] >= 'a' && texto[i-1] <= 'z') || (texto[i-1] >= 'A' && texto[i-1] <= 'Z') || (texto[i-1] >= '0' && texto[i-1] <= '9') )
	x++;
      if ( (texto[i] == ',' || texto[i] == '.') && (texto[i+1] >= '0' && texto[i+1] <= '9') )
	x--;
    }
    i++;
  }
  
  printf("%d\n", x);
  return 0;
}
