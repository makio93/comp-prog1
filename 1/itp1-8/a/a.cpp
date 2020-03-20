#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (isupper(ch)) ch = tolower(ch);
		else if (islower(ch)) ch = toupper(ch);
		cout << ch;
		if (ch=='\n') break;
	}
	return 0;
}

