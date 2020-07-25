#include <stdio.h>
#include <math.h>

int main(void) {
   short n;

   scanf("%hd", &n);
   printf("%d\n", (int) pow(4, (int) log2(n)));

   return 0;
}

