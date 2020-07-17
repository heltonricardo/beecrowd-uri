#include <stdio.h>
#include <math.h>

int main(void) {
   short n;

   scanf("%d", &n);

   printf("%lu\n", (unsigned long)pow(3, n));

   return 0;
}

