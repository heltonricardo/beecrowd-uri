#include <stdio.h>
#include <math.h>

int main(void) {
   double a, b;

   scanf("%lf %lf", &a, &b);

   printf("%d\n", (int)ceil(b / (b - a)));

   return 0;
}


