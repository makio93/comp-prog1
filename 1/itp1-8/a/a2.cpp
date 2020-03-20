#include <cstdio>
#include <cctype>

int main()
{
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (isalpha(ch)) {
			if (isupper(ch)) printf("%c", tolower(ch));
			else printf("%c", toupper(ch));
		} else printf("%c", ch);
		if (ch=='\n') break;
	}
	return 0;
}

