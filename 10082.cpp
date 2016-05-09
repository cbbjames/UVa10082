//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<cstring>
int main()
{
	char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c='\0';
	while ((c = getchar()) != EOF)
	{
		if (c == 32)
			putchar(32);
		if (c == '\n')
			putchar('\n');
		for (int i = 0; i < strlen(s); i++)
		{
			if (c == s[i])
				putchar(s[i - 1]);
		}
	}
	//system("PAUSE");
	return 0;
}