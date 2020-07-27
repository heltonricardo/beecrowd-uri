#include <iostream>
#include <cmath>

using namespace std;

bool eprimo(long long X) {
   long long I, L = sqrt(I);

   for (I = 2; I < X; ++I)
      if (X % I == 0)
         return false;

   return true;
}

int main(void) {
   long long N, I, Q;

   while (cin >> N and N != 0) {
      Q = 0;
      I = 1;
      while (I <= N) {
         if (eprimo(I)) {
            cout << I << endl;
            ++Q;
         }
         ++I;
      }
   }
   return 0;
}

