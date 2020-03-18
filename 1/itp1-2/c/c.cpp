#include <iostream>
using namespace std;

int main()
{
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  if (a1 > a2) {
    int t;
    t = a1;
    a1 = a2;
    a2 = t;
  }
  if (a2 > a3) {
    int t;
    t = a2;
    a2 = a3;
    a3 = t;
  }
  if (a1 > a2) {
    int t;
    t = a1;
    a1 = a2;
    a2 = t;
  }
  cout << a1 << ' ' << a2 << ' ' << a3 << endl;
  return 0;
}

