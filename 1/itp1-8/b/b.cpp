#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char digit[1001];
	while (1) {
		cin >> digit;
		if (strcmp(digit, "0")==0) break;
		int sum = 0;
		for (int i=0; digit[i]!='\0'; i++) sum += digit[i] - '0';
		cout << sum << endl;
	}
	return 0;
}

