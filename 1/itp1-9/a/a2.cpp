#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string tolowers(string s)
{
	for (int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
	return s;
}

int main()
{
	string w;
	cin >> w;
	w = tolowers(w);
	int count = 0;
	while (1) {
		string t;
		cin >> t;
		if (t == "END_OF_TEXT") break;
		t = tolowers(t);
		if (t == w) count++;
	}
	cout << count << endl;
	return 0;
}

