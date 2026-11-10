#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, x;
	scanf("%d", &a);
	x = a;
	for (int i = 2;i < a+1;i++)
	{	
		while (a% i ==0) 
		{ 
			a = a / i;
			if (a != 1) { printf("%d*", i); }
			else { printf("%d", i); }
		}
	}
	return 0;
}