#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int tp = 0, hp = 0;
	for (int i=0; i<n; i++) {
		string taro, hanako;
		cin >> taro >> hanako;
		if (taro > hanako) tp += 3;
		else if (taro < hanako) hp += 3;
		else {
			tp++; hp++;
		}
	}
	cout << tp << ' ' << hp << endl;
	return 0;
}

