#include <iostream>
using namespace std;

int main()
{
  int a, b, c, ans = 0;
  cin >> a >> b >> c;
  for (int x=a; x<=b; x++) {
    if (c % x == 0) ans++;
  }
  cout << ans << endl;
  return 0;
}

