#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, m, x;
	scanf("%d %d\n", &a, &b);
	scanf("%d", &m);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a;i < b + 1;i++)
	{
		if (i % m == 0) { x = i; }
	}
	printf("[%d,%d] %d", a, b, x);


	return 0;
}