#include <stdio.h>

int main(void) {
  int i;
  float f[4]; // An Array of 4 floats
  int a[5] = {22, 37, 54, 100, 2334};

  f[0] = 3.12345;
  f[1] = 1.33212;
  f[2] = 5.34455;
  f[3] = 6.37264;

  for (i = 0; i < 4; i++) {
    printf("%f\n", f[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("%d\n", a[i]);
  }
}
