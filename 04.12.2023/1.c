#include <stdio.h>
#define FUNCTION(a, b) (a + b)*(a + b)
int main(void) {
  int  a = 1;
  int  b = 2;
  printf("%d", FUNCTION(a, b));
}