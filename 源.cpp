#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s[15] = {0};
int sa[15] = { 0 };
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &s[i]);
	}

	for (int i = 0;i < n;i++)
	{
		sa[i]=s[n - 1 - i];
	}

	for (int i = 0;i <n;i++)
	{
		if (i >0) { printf(" "); }
		printf("%d", sa[i]);
	}

	return 0;
}