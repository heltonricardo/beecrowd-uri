#include <stdio.h>

int main(void) {
   int n, i;
   int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;

   scanf("%d", &n);
   for (i = 0; i < n; ++i) {
      scanf("%d %d %d %d %d", &ax, &ay, &bx, &by, &cx);
      scanf("%d %d %d %d %d", &cy, &dx, &dy, &rx, &ry);
      if (dy >= ry && cy >= ry && ay <= ry && by <= ry)
         if (dx <= rx && ax <= rx && cx >= rx && bx >= rx)
            printf("1");
         else printf("0");
      else printf("0");
      printf("\n");
   }

   return 0;
}

