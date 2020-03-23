#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a, b, cd;
	cin >> a >> b >> cd;
	double PI = acos(-1);
	double cr, s, l, h;
	cr = cd * PI / 180;
	s = a * b * sin(cr) / 2;
	l = a + b + sqrt(a*a+b*b-2*a*b*cos(cr));
	h = s / a * 2;
	printf("%f\n%f\n%f\n", s, l, h);
	return 0;
}

