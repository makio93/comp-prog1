#include <iostream>
#include <string>
using namespace std;

string shuffle(int m, string s)
{
	for (int i=0; i<m; i++) {
		int h;
		cin >> h;
		string s1, s2;
		s1 = s.substr(0, h);
		s2 = s.substr(h, s.size()-h);
		s = s2 + s1;
	}
	return s;
}

int main()
{
	while (1) {
		string s;
		cin >> s;
		if (s == "-") break;
		int m;
		cin >> m;
		s = shuffle(m, s);
		cout << s << endl;
	}
	return 0;
}

