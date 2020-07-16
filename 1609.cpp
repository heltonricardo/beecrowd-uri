#include <iostream>
#include <set>

using namespace std;

int main(void) {
   int i, n, k, g, q;
   set<int> st;

   cin >> q;
   for (g = 0; g < q; ++g) {
      cin >> k;
      st.clear();
      for (i = 0; i < k; ++i) {
         cin >> n;
         if(st.insert(n).second == false)
               st.insert(n);
      }
      cout << st.size() << endl;
   }
   return 0;
}

