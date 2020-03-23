#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	int count[26] = {};
	while (cin >> ch) {
		if (!isalpha(ch)) continue;
		int num = tolower(ch) - 'a';
		count[num]++;
	}
	for (char c='a'; c<='z'; c++) {
		int num = c - 'a';
		cout << c << " : " << count[num] << endl;
	}
	return 0;
}

