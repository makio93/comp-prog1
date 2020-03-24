#include <iostream>
using namespace std;

class Dice {
	public:
	int face[6];
	Dice () {}
	void roll_x(bool d) {
		if (d) rotate(0, 4, 5, 1);
		else rotate(1, 5, 4, 0);
	}
	void roll_y(bool d) {
		if (d) rotate(0, 2, 5, 3);
		else rotate(3, 5, 2, 0);
	}
	void roll_z(bool d) {
		if (d) rotate(1, 3, 4, 2);
		else rotate(2, 4, 3, 1);
	}
	void rotate(int a, int b, int c, int d) {
	  int t;
	  t = face[d];
	  face[d] = face[c];
	  face[c] = face[b];
	  face[b] = face[a];
	  face[a] = t;
	}
	void print() {
		cout << face[0] << endl;
	}
};

bool isSameNum(Dice d1, Dice d2)
{
	for (int i=0; i<6; i++) {
		if (d1.face[i]!=d2.face[i]) return false;
	}
	return true;
}

bool isSame(Dice d1, Dice d2)
{
	for (int i=0; i<6; i++) {
		for (int j=0; j<4; j++) {
			if (isSameNum(d1, d2)) return true;
			d1.roll_z(true);
		}
		if (i%2==0) d1.roll_x(true);
		else d1.roll_y(true);
	}
	return false;
}

bool isAllDiff(int n, Dice* dn)
{
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (isSame(dn[i], dn[j])) return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	Dice d[100];
	for (int i=0; i<n; i++) {
		for (int j=0; j<6; j++) cin >> d[i].face[j];
	}
	if (isAllDiff(n, d)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

