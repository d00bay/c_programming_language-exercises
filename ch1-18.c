#include <stdio.h>

#define MAXLINE 100

/* renamed from the book since stdio now contains a getline */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int remove_blanks(char line[], int len);

int main() {
  int len, new_len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0) {
    new_len = remove_blanks(line, len);
    if (new_len > max) {
      max = new_len;
      copy(longest, line);
    }
  }

  if (max > 0)
    printf("%s", longest);

  return 0;
}

int remove_blanks(char line[], int len) {
  int i, j;
  char new_line[MAXLINE];

  for (i=0,j=0 ; i < len ; i++) {
    if (line[i] != ' ' && line[i] != '\t') 
      new_line[j++] = line[i];
  }
  new_line[j] = '\0';
  copy(line, new_line);

  /* if j == 0, it's a full blank line, otherwise j is len of line */
  return j;
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

