#include <stdio.h>
#include <math.h>

int main(void) {
   int a, b, c;
   while (scanf("%d %d %d", &a, &b, &c) == 3 && (a || b || c))
      printf("%d\n", (int)cbrt(a*b*c));
   return 0;
}


