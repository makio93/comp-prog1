#include <iostream>
using namespace std;

void rotate(int*, int, int, int, int);

class Dice {
	public:
	int face[6];
	Dice (int* f) {
		for (int i=0; i<6; i++) face[i] = f[i];
	}
	void roll(char d) {
		if (d=='N') {
			roll_x(true);
		}
		if (d=='S') {
			roll_x(false);
		}
		if (d=='E') {
			roll_y(true);
		}
		if (d=='W') {
			roll_y(false);
		}
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

int main()
{
	int f[6];
	for (int i=0; i<6; i++) cin >> f[i];
	int n;
	cin >> n;
	for (int k=0; k<n; k++) {
		Dice d(f);
		int n1, n2;
		cin >> n1 >> n2;
		int i;
		for (i=0; i<6; i++) {
			if (d.face[i] == n1) break;
		}
		if (i==1) d.roll_x(true);
		if (i==2) d.roll_y(false);
		if (i==3) d.roll_y(true);
		if (i==4) d.roll_x(false);
		if (i==5) {
			for (int j=0; j<2; j++) d.roll_x(true);
		} 
		for (int j=0; j<4; j++) {
			if (d.face[1] == n2) {
				cout << d.face[2] << endl;
				break;
			}
			d.roll_z(true);
		}
	}
	return 0;
}

