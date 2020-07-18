#include <iostream>
using namespace std;

int tam(char *p) {
   int i = 0;
   while (*p++) ++i;
   return i;
}

short cti(char c) { return c-48; }

int main(void) {
   int i, f, t;
   char m[4][90];
   int v[90];

   cin >> m[0] >> m[1] >> m[2] >> m[3];
   t = tam(m[0]);

   for (i = 0; i < t; ++i) {
      f = cti(m[0][i]) * 1000 + cti(m[1][i]) * 100 + cti(m[2][i]) * 10 + cti(m[3][i]);
      v[i] = f;
   }

   for (i = 1; i < t-1; ++i)
      cout << char((v[0] * v[i] + v[t-1]) % 257);
   cout << endl;
   return 0;
}
