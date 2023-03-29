#include <iostream>
#include <string>

using namespace std;

int main(void) {
   short t, a[1000], i, e[1000], j, n;
   string resp;

   while (true) {
      cin >> t;
      if (t == 0) break;
      while (true) {
         for (i = 0; i < t; ++i) cin >> a[i];
         if (i = 1 and a[0] == 0) {
            cout << endl;
            break;
         }
         j = 0;
         resp = "No";
         n = t;
         while (true) {
            if (n == 0) {
               resp = "Yes";
               break;
            }
            if (i and a[i-1] == n) {
               --i;
               --n;
            }
            else if (j and e[j-1] == n) {
               --j;
               --n;
            }
            else if (i){
               e[j] = a[i-1];
               --i;
               ++j;
            }
            else break;
         }
         cout << resp << endl;
      }
   }
   return 0;
}








