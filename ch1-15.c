#include <stdio.h>

int f_to_c(int deg_f);

int main(void) {
  int lower, upper, step;
  int f, c;

  lower = 0;
  upper = 300;
  step = 20;

  f = lower;
  while (f <= upper) {
    c = f_to_c(f);
    printf("%dF:%dC\n", f, c);
    f += step;
  }
  
  return 0;
}

int f_to_c(int deg_f) {
  return 5 * (deg_f-32) / 9;
}
