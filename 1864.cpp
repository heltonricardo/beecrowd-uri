#include <iostream>

using namespace std;

int main(void) {
   char f[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
   int i, n;

   cin >> n;
   for (i = 0; i < n; ++i)
      cout << f[i];
   cout << endl;
   return 0;
}

