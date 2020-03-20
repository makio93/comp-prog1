#include <iostream>
using namespace std;

int main()
{
	int n;
	bool cards[4][14] = {};
	cin >> n;
	for (int i=0; i<n; i++) {
		char pict;
		int rank, pNum;
		cin >> pict >> rank;
		if (pict=='S') pNum = 0;
		else if (pict=='H') pNum = 1;
		else if (pict=='C') pNum = 2;
		else if (pict=='D') pNum = 3;
		cards[pNum][rank] = true;
	}
	for (int i=0; i<4; i++) {
		for (int j=1; j<=13; j++) {
			if (!cards[i][j]) {
				if (i==0) cout << "S ";
				else if (i==1) cout << "H ";
				else if (i==2) cout << "C ";
				else if (i==3) cout << "D ";
				cout << j << endl;
			}
		}
	}
	return 0;
}

