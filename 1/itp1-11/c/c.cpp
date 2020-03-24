#include <iostream>
using namespace std;

class Dice {
	public:
	int face[6];
	Dice (int* f) {
		for (int i=0; i<6; i++) face[i] = f[i];
	}
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

bool sortDice(Dice* d, int u, int f) {
	for (int i=0; i<6; i++) {
		for (int j=0; j<4; j++) {
			if (d->face[0]==u && d->face[1]==f) return true;
			d->roll_z(true);
		}
		if (i%2==0) d->roll_x(true);
		else d->roll_y(true);
	}
	return false;
}

bool isSame(Dice d1, Dice d2) {
	if (sortDice(&d1, d2.face[0], d2.face[1])) {
		for (int i=2; i<6; i++) {
			if (d1.face[i]!=d2.face[i]) return false;
		}
		return true;
	}
	else return false;
}

int main()
{
	int f1[6], f2[6];
	for (int i=0; i<6; i++) cin >> f1[i];
	for (int i=0; i<6; i++) cin >> f2[i];
	Dice d1(f1), d2(f2);
	if (isSame(d1, d2)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

