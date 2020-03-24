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
			rotate(face, 0, 4, 5, 1);
		}
		if (d=='S') {
			rotate(face, 1, 5, 4, 0);
		}
		if (d=='E') {
			rotate(face, 0, 2, 5, 3);
		}
		if (d=='W') {
			rotate(face, 3, 5, 2, 0);
		}
	}
	void rotate(int* f, int a, int b, int c, int d) {
	  int t;
	  t = f[d];
	  f[d] = f[c];
	  f[c] = f[b];
	  f[b] = f[a];
	  f[a] = t;
	}
	void print() {
		cout << face[0] << endl;
	}
};

int main()
{
	int f[6];
	for (int i=0; i<6; i++) cin >> f[i];
	Dice d(f);
	string ord;
	cin >> ord;
	for (int i=0; i<ord.size(); i++) d.roll(ord[i]);
	d.print();
	return 0;
}

