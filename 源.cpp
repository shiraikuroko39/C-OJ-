#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	long long int N, nmax = 0, n = 0, begin, end, N1;
	scanf("%lld", &N);N1 = N;

	for (long long int i = 2;i <= N/i;i++)
	{
		long long int j = i;
		while (N1 % j == 0)
		{
			N1 = N1 / j;
			j++;
			n++;
		}
		if (n > nmax) { nmax = n;begin = i;end = i + nmax - 1; }
		n = 0;
		N1 = N;
	}



	
	if (nmax == 0) { printf("%d\n", 1); printf("%lld", N); }
	else {
		printf("%lld\n", nmax);
		for (long long int i = begin;i <= end;i++)
		{
			if (i > begin) { printf("*"); }
			printf("%lld", i);
		}
	}

	return 0;
}


