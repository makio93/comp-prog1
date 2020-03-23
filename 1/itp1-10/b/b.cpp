#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a, b, cd;
	cin >> a >> b >> cd;
	double PI = acos(-1);
	double cr = cd * PI / 180;
	double s = a * b * sin(cr) / 2;
	double c = sqrt(a*a+b*b-2*a*b*cos(cr));
	double l = a + b + c;
	double h = s / a * 2;
	printf("%f\n%f\n%f", s, l, h);
	return 0;
}

