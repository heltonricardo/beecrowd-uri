#include <iostream>

using namespace std;

int main(void) {
   int a[5], b[5], i;
   bool d = true;

   for (i = 0; i < 5; ++i) cin >> a[i];
   for (i = 0; i < 5; ++i) cin >> b[i];

   for (i = 0; i < 5; ++i)
      if (!(a[i] xor b[i])) {
         d = false;
         break;
      }

   if (d) cout << "Y";
   else cout << "N";
   cout << endl;
   return 0;
}

