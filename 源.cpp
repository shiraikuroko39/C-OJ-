#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s[15] = {0};
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &s[i]);
	}

	for (int i = (n - 1);i >= 0;i--)
	{
		if (i < n - 1) { printf(" "); }
		printf("%d", s[i]);
	}
	return 0;
}