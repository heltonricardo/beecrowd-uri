#include <iostream>

using namespace std;

int main(void) {
   unsigned long long a, b;
   cin >> a >> b;
   cout << (unsigned long long)((a + b) * (b - a + 1) / 2) << endl;
   return 0;
}
