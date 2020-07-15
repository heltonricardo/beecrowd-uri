#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int a[] = {1, 2, 3};
   a = (int *) realloc(a, 4 * sizeof(int));
   printf("%d\n", sizeof(a)/sizeof(int));
   return 0;
}

