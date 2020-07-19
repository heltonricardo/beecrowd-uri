#include <iostream>
#include <cctype>

using namespace std;

int tam(char *s) {
   int i = 0;
   while (*s++) ++i;
   return i;
}

int cti(char c) { return c-48; }

int soma(char *s) {
   t = tam(s);
   while (t => 2) {

   }
}

int main(void) {
   char n[110], m[110];
   int vn, vm;

   while (cin >> n >> m and (n or m)) {
      vn = soma(n);
      vm = soma(m);
      cout << vn << " " << vm << endl;
   }
   return 0;
}

