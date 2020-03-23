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
	double p1 = 0.0, p2 = 0.0, p3 = 0.0, pi = 0.0, d[100];
	for (int i=0; i<n; i++) d[i] = fabs(x[i]-y[i]);
	for (int i=0; i<n; i++) p1 += d[i];
	for (int i=0; i<n; i++) p2 += d[i]*d[i];
	p2 = sqrt(p2);
	for (int i=0; i<n; i++) p3 += d[i]*d[i]*d[i];
	p3 = pow(p3, 1.0/3);
	for (int i=0; i<n; i++) {
		if (d[i] > pi) pi = d[i];
	}
	printf("%f\n%f\n%f\n%f\n", p1, p2, p3, pi);
	return 0;
}

