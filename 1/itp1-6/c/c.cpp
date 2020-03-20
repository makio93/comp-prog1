#include <iostream>
using namespace std;

int main()
{
	int count[5][4][11];
	for (int i=0; i<5; i++)
		for (int j=0; j<4; j++)
			for (int k=0; k<11; k++)
				count[i][j][k] = 0;
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		count[b][f][r] += v;
	}
	for (int i=1; i<=4; i++) {
		for (int j=1; j<=3; j++) {
			for (int k=1; k<=10; k++) cout << ' ' << count[i][j][k];
			cout << endl;
		}
		if (i<4) {
			for (int c=0; c<20; c++) cout << '#';
			cout << endl;
		}
	}
	return 0;
}

