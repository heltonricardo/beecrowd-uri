#include <stdio.h>

void ex(char *a, char *b) {
   while (*a) {
      if ('0' <= *a && *a <= '9') *b++ = *a;
      else if (*a == 'O' || *a == 'o') *b++ = '0';
      else if (*a == 'l') *b++ = '1';
      ++a;
   }
   *b = '\0';
}

int main(void) {
   char e[52], n[52];
   long long v;

   while (scanf("%[^\n]s", e) == 1) {
      while (getchar() != '\n');
      ex(e, n);
      printf("%s\n", n);
   }

   return 0;
}
