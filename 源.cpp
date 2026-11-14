#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s[105] = { 0 };
int ou[105] = { 0 };
int ji[105] = { 0 };
int main() {
	int n, x = 0, y = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &s[i]);
	}


	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - 1 - i;j++)
		{
			if (s[j] < s[j + 1])
			{
				int temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < n;i++)
	{
		if (s[i] % 2 == 0) { ou[x] = s[i];x++; }
		else { ji[y] = s[i];y++; }
	}

	int first = 1;
	for (int i=0;i < x;i++)
	{
		if (first==1) { printf("%d", ou[i]);first = 0; }
		else { printf(" %d", ou[i]);}
	}

	for (int i=0;i < y;i++)
	{
		if (first==1) { printf("%d", ji[i]); first = 0; }
		else { printf(" %d", ji[i]); }
	}
	return 0;
}