#include <iostream>
using namespace std;

int main()
{
	int n;
	bool cards[4][14] = {};
	cin >> n;
	for (int i=0; i<n; i++) {
		char pict;
		int rank;
		cin >> pict >> rank;
		if (pict=='S') cards[0][rank] = true;
		else if (pict=='H') cards[1][rank] = true;
		else if (pict=='C') cards[2][rank] = true;
		else if (pict=='D') cards[3][rank] = true;
	}
	for (int i=0; i<4; i++) {
		for (int j=1; j<=13; j++) {
			if (cards[i][j]) continue;
			char pict;
			if (i==0) pict = 'S';
			else if (i==1) pict = 'H';
			else if (i==2) pict = 'C';
			else if (i==3) pict = 'D';
			cout << pict << ' ' << j << endl;
		}
	}
	return 0;
}

