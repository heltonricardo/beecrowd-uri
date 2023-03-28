#include <stdio.h>

int main(void) {
   long long a, b;

   while (scanf("%lld %lld", &a, &b) == 2)
      printf("%lld\n", a^b);

   return 0;
}

