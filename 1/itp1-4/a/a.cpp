#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int d = a / b, r = a % b;
  double f = (double)a / (double)b;
  printf("%d %d %f\n", d, r, f);
  return 0;
}

