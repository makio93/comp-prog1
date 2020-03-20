#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100], b[100], c[100];
	for (int i=0; i<n; i++) 
		for (int j=0; j<m; j++) cin >> a[i][j];
	for (int i=0; i<m; i++) cin >> b[i];
	for (int i=0; i<n; i++) {
		c[i] = 0;
		for (int j=0; j<m; j++) c[i] += a[i][j] * b[j];
	}
	for (int i=0; i<n; i++) cout << c[i] << endl;
	return 0;
}

