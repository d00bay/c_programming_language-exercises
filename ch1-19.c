#include <stdio.h>

#define MAXLINE 100

/* renamed from the book since stdio now contains a getline */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);
/* ch1-19 */
void reverse_str(char line[], int len);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0) {
    reverse_str(line, len);
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)
    printf("%s", longest);

  return 0;
}

int get_line(char s[], int lim) {
  int c, i;
  
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]){
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

void reverse_str(char line[], int len) {
  char rev_line[MAXLINE];
  int i, j;

  for (i=len-1, j=0 ; j < len ; i--, j++) {
    rev_line[j] = line[i];
  }
  rev_line[j++] = '\n';
  rev_line[j] = '\0';
  copy(line, rev_line);
}
