#include <iostream>

using namespace std;

int main(void) {
   int num, nv, qnt, i;

   while (cin >> qnt) {
      nv = 1;
      for (i = 0; i < qnt; ++i) {
         cin >> num;
         if (num >= 10 and num < 20) {
            if (nv != 3) nv = 2;
         }
         else if (num >= 20) nv = 3;
      }
      cout << nv << endl;
    }
   return 0;
}
