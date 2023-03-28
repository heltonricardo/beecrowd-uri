#include <iostream>

using namespace std;

void srt(char *c, int n) {

}

int main(void) {
   int q, k, n, j;
   char p[25][100];

   cin >> q;
   cin.ignore(80, '\n');
   for (k = 0; k < q; ++k) {
      cin >> n;
      cin.ignore(80, '\n');
      for (j = 0; j < n; ++j) {
         cin.getline(p[j], sizeof(p[j]));
      }
   }
   return 0;
}

