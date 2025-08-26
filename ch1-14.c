#include <stdio.h>

#define MAX_OCCURENCE 82
#define ALPHA_LEN     26

void main(void) {
  int i,j;
  /* just doing letters both cases and assuming ASCII */
  int upper_letters[ALPHA_LEN];
  int lower_letters[ALPHA_LEN];
  char c;

  for (i = 0; i < ALPHA_LEN ; i++) {
    upper_letters[i] = 0;
    lower_letters[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= 65 && c <= 90) {
      upper_letters[c-65]++;
    }
    if (c >= 97 && c <= 122) {
      lower_letters[c-97]++;
    }
  }
  for (i = 0; i < ALPHA_LEN ; i++) {
    if (upper_letters[i] == 0)
      continue;
    putchar(i+65);
    putchar(':');
    for (j = 0 ; j < MAX_OCCURENCE ; j++) {
      if (j == upper_letters[i])
        break;
      else 
        putchar(j);
      putchar('*');
    }
    putchar('\n');
  } 
  for (i = 0; i < ALPHA_LEN ; i++) {
    if (lower_letters[i] == 0)
      continue;
    putchar(i+97);
    putchar(':');
    for (j = 0 ; j < MAX_OCCURENCE ; j++) {
      if (j == lower_letters[i])
          break;
      putchar('*');
    }
    putchar('\n');
  }
}
