#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int n, x[100], y[100];
	cin >> n;
	for (int i=0; i<n; i++) cin >> x[i];
	for (int i=0; i<n; i++) cin >> y[i];
	double d[4] = {};
	for (int p=1; p<4; p++) {
		for (int i=0; i<n; i++) d[p] += pow(fabs(x[i]-y[i]), p);
		d[p] = pow(d[p], 1.0/p);
	}
	for (int i=0; i<n; i++) {
		d[0] = (d[0]<fabs(x[i]-y[i])?fabs(x[i]-y[i]):d[0]);
	}
	for (int p=1; p<4; p++) {
		printf("%f\n", d[p]);
	}
	printf("%f\n", d[0]);
	return 0;
}

