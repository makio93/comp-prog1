#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1) {
		string s;
		cin >> s;
		if (s == "-") break;
		int t;
		cin >> t;
		for (int i=0; i<t; i++) {
			int h;
			cin >> h;
			string s1, s2;
			s1 = s.substr(0, h);
			s2 = s.substr(h, s.size()-h);
			s = s2 + s1;
		}
		cout << s << endl;
	}
	return 0;
}

