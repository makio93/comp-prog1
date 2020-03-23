#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[201], p[101];
	cin >> s >> p;
	char t[101];
	strcpy(t, s);
	strcat(s, t);
	if (strstr(s, p)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

