#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s[1005] = { 0 };
int a[1005] = { 0 };
int main() {
	int n, x = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &s[i]);
	}


	int flag = 1;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < i;j++)
		{
			if (s[i] == s[j]) { flag = 0; }
		}

		if (flag == 1) { a[x] = s[i];x++; }

		flag = 1;
	}

	for (int i = 0;i < x;i++)
	{
		for (int j = 0;j < x - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0;i < x;i++)
	{
		if (i > 0) { printf(" "); }
		printf("%d", a[i]);
	}
	


	return 0;
}