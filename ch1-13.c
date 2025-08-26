#include <stdio.h>

#define MAXLEN  64
#define WORDNUM 10

void main(void) {
  char word[WORDNUM][MAXLEN], c, d;
  int i,j;

  for (i = 0; i < WORDNUM; i++) {
    for(j = 0; j < MAXLEN; j++) {
      word[i][j]=0;
    }
  }
  for (i = 0; i < WORDNUM; i++) {
    for (j = 0; j < MAXLEN; j++) {
      c = getchar();
      if (c != ' ' && c != '\n' && c != EOF) {
        word[i][j] = c;
      }
      if (c == EOF || c == '\n')
        break;
    }
    if (c == EOF)
      break;
  }
  for (i = 0; i < WORDNUM; i++) {
    if (word[i][j] == 0)
      break;
    for (j = 0; j < MAXLEN && word[i][j] != 0; j++) {
      putchar('#');
    }
    putchar('\n');
  }
}
