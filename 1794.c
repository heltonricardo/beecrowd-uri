#include <stdio.h>

int main(void) {
   int n, la, lb;

   scanf("%d", &n);
   scanf("%d %d", &la, &lb);

   if (la <= n && n <= lb) {
      scanf("%d %d", &la, &lb);
      if (la <= n && n <= lb)
         printf("possivel");
      else printf("impossivel");
   }
   else {
      scanf("%d %d", &la, &lb);
      printf("impossivel");
   }
   printf("\n");
   return 0;
}

