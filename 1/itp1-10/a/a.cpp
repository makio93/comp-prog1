#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double ans;
	ans = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%f\n", ans);
	return 0;
}

