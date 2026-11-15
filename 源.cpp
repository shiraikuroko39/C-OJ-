#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s[105] = { 0 };
int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &s[i]);
	}
	scanf("%d", &s[n]);

	for (int i = 0;i < n + 1;i++) {
		for (int j=0;j < n - i;j++)
		{
			if (s[j] > s[j + 1])
			{
				int t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
		}
	}


	for (int i = 0;i < n + 1;i++) {
		if (i > 0) { printf(" "); }
		printf("%d", s[i]);
	}

	return 0;
}