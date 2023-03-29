#include <iostream>
#include <cstring>

using namespace std;

char dif(char a, char b) {
   if (a <= b) return b - a;
   else return 26 - a + b;
}

int main(void) {
   int n, i, t, j, q;
   char a[10001], b[10001];

   cin >> n;
   for (j = 0; j < n; ++j) {
      cin >> a >> b;
      cin.ignore(80, '\n');

      q = 0;
      t = strlen(a);
      for (i = 0; i < t; ++i)
         q += dif(a[i], b[i]);
      cout << q << endl;
   }
   return 0;
}
