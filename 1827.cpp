#include <iostream>

using namespace std;

int main(void) {
   int n, e, d, i, j;

   while (cin >> n) {
      e = n / 3;
      d = n - e - 1;
      for (i = 0; i < n; ++i) {
         for (j = 0; j < n; ++j) {
            if (e <= i and i <= d and e <= j and j <= d)
               if (n % 2 != 0 and i == j and i == ((n - 1) / 2)) cout << 4;
               else cout << 1;

            else if (i == j) cout << 2;
            else if (i+j == n-1) cout << 3;
            else cout << 0;

         }
         cout << endl;
      }
      cout << endl;
   }
   return 0;
}

