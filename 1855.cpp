#include <iostream>

using namespace std;

int main(void) {
   char mapa[105][105], ant;
   int x, y, i, j;
   bool bau = false;

   cin >> x >> y;
   for (i = 0; i < y; ++i) {
      cin >> mapa[i];
      cin.ignore(80, '\n');
   }

   i = 0; j = 0;
   while (mapa[0][0] != '.') {
      if (mapa[i][j] == 'x') break;
      else if (mapa[i][j] == '*') { bau = true; break; }
      else if (i >= y or i < 0 or j >= x or j < 0) break;
      else if (mapa[i][j] == '^') { ant = mapa[i][j]; mapa[i][j] = 'x'; --i; }
      else if (mapa[i][j] == '>') { ant = mapa[i][j]; mapa[i][j] = 'x'; ++j; }
      else if (mapa[i][j] == 'v') { ant = mapa[i][j]; mapa[i][j] = 'x'; ++i; }
      else if (mapa[i][j] == '<') { ant = mapa[i][j]; mapa[i][j] = 'x'; --j; }
      else if (mapa[i][j] == '.') {
         if (ant == '^') { mapa[i][j] = 'x'; --i; }
         else if (ant == '>') { mapa[i][j] = 'x'; ++j; }
         else if (ant == 'v') { mapa[i][j] = 'x'; ++i; }
         else if (ant == '<') { mapa[i][j] = 'x'; --j; }
      }
   }
   if (bau) cout << "*";
   else cout << "!";
   cout << endl;
   return 0;
}

