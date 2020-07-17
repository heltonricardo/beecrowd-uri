#include <iostream>

using namespace std;

int main(void) {
   int n, lim, i, j;

   while (cin >> n) {
      lim = n / 2;
      for (i = 1; i <= n; i+=2) {
         for (j = 0; j < lim; ++j) cout << " ";
         --lim;
         for (j = 0; j < i; ++j) cout << "*";
         cout << endl;
      }
      lim = n / 2;
      for (j = 0; j < lim; ++j) cout << " ";
      cout << "*" << endl;
      --lim;
      for (j = 0; j < lim; ++j) cout << " ";
      cout << "***" << endl << endl;
   }
   return 0;
}

