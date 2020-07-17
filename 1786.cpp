#include <iostream>

using namespace std;

short cti(char c) { return c - 48; }

int main(void) {
   int s, i, b1, b2;
   char c[10];

   while (cin >> c) {
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

      cout << c[0] << c[1] << c[2] << ".";
      cout << c[3] << c[4] << c[5] << ".";
      cout << c[6] << c[7] << c[8] << "-";
      cout << b1 << b2 << endl;
   }

   return 0;
}


