#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   int n, i, t;
   vector<int> v;

   while (cin >> n and n) {
      for (i = 1; i <= n; ++i) v.insert(v.begin(), i);
      cout << "Discarded cards: ";
      while (v.size() > 1) {
         cout << v.back();
         v.pop_back();
         v.insert(v.begin(), v.back());
         v.pop_back();
         if (v.size() != 1) cout << ", ";
      }
      cout << endl << "Remaining card: " << v.back() << endl;
      v.clear();
   }
   return 0;
}
