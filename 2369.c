#include <stdio.h>

int main(void) {
   short n, s=7, a=0, b=0, c=0;
   scanf("%hd", &n);
   if (n-100 > 0) n -= (a = n-100);
   if (n-30 > 0) n -= (b = n-30);
   if (n-10 > 0) n -= (c = n-10);
   printf("%hd\n", a*5 + b*2 + c + 7);
   return 0;
}
