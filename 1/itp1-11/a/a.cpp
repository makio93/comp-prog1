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
	void print() {
		cout << face[0] << endl;
	}
};

void rotate(int* f, int a, int b, int c, int d) {
	int t;
	t = f[d];
	f[d] = f[c];
	f[c] = f[b];
	f[b] = f[a];
	f[a] = t;
}

int main()
{
	int f[6];
	for (int i=0; i<6; i++) cin >> f[i];
	Dice d(f);
	string dir;
	cin >> dir;
	for (int i=0; i<dir.size(); i++) d.roll(dir[i]);
	d.print();
	return 0;
}

