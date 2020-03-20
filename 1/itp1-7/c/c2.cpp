#include <iostream>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	int t[101][101];
	for (int i=0; i<=r; i++) t[i][c] = 0;
	for (int i=0; i<c; i++) t[r][i] = 0;
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			cin >> t[i][j];
			t[i][c] += t[i][j];
			t[r][j] += t[i][j];
			t[r][c] += t[i][j];
		}
	}
	for (int i=0; i<=r; i++) {
		for (int j=0; j<=c; j++) {
			if (j) cout << ' ';
			cout << t[i][j];
		}
		cout << endl;
	}
	return 0;
}

