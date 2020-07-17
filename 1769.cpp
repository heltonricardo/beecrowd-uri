#include <iostream>

using namespace std;

void cpf(char *a, char *b) {
   while (*a) {
      if ('0' <= *a and *a <= '9')
         *b++ = *a;
      ++a;
   }
   *b = '\0';
}

short cti(char c) {
   return c - 48;
}

int main(void) {
   int s, i, b1, b2;
   char e[15], c[12];

   while (cin >> e) {
      cpf(e, c);

      s = 0;
      for (i = 0; i < 9; ++i)
         s += cti(c[i]) * (i+1);
      b1 = s % 11;
      b1 = (b1 != 10) ? b1 : 0;

      s = 0;
      for (i = 0; i < 9; ++i)
         s += cti(c[i]) * (9-i);
      b2 = s % 11;
      b2 = (b2 != 10) ? b2 : 0;

      if (b1 == cti(c[9]) and b2 == cti(c[10]))
         cout << "CPF valido";
      else
         cout << "CPF invalido";
      cout << endl;
   }

   return 0;
}

