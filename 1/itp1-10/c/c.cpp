#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;
		double ave = 0.0, sum = 0.0, a;
		int s[1000];
		for (int i=0; i<n; i++) {
			cin >> s[i];
			ave += s[i];
		}
		ave /= n;
		for (int i=0; i<n; i++) sum += (s[i]-ave) * (s[i]-ave);
		a = sqrt(sum/n);
		printf("%f\n", a);
	}
	return 0;
}

