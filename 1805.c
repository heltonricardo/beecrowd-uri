#include <stdio.h>

int main(void) {
   unsigned long long a, b;
   scanf("%llu %llu", &a, &b);
   printf("%llu\n", (unsigned long long)((a + b) * (b - a + 1) / 2));
   return 0;
}
