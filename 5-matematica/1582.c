#include <stdio.h>

int mdc(int x, int y, int z) {
   int mdc = x;
   while (x % mdc != 0 || y % mdc != 0 || z % mdc != 0)
      mdc -= 1;
   return mdc;
}

int main(void) {
   int a, b, c;

   while (scanf("%d %d %d", &a, &b, &c) == 3) {
      if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
        if (mdc(a, b, c) == 1) printf("tripla pitagorica primitiva\n");
        else printf("tripla pitagorica\n");
      else printf("tripla\n");
   }
   return 0;
}
