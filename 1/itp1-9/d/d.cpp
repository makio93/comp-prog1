#include <iostream>
#include <string>
using namespace std;

void print(int a, int b, string str)
{
	cout << str.substr(a, b-a+1) << endl;
}

string replace(int a, int b, string str, string p)
{
	str.replace(a, b-a+1, p);
	return str;
}

string reverse(int a, int b, string str)
{
	string tmp;
	for (int i=0; i<b-a+1; i++) {
		tmp.insert(tmp.size(), str.substr(b-i, 1));
	}
	str = replace(a, b, str, tmp);
	return str;
}

int main()
{
	string str;
	int n;
	cin >> str >> n;
	for (int i=0; i<n; i++) {
		string order;
		int a, b;
		cin >> order >> a >> b;
		if (order=="print") print(a, b, str);
		if (order=="reverse") str = reverse(a, b, str);
		if (order=="replace") {
			string p;
			cin >> p;
			str = replace(a, b, str, p);
		}
	}
	return 0;
}

