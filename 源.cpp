#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int runnian(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		return 0;
	}
	else { return 1; }
}

int tianshu(int y,int m,int d) {
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x = 0;
	
	x += 365 * (y - 1) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
	if (runnian(y) == 0 && m > 2) { x += 1; }

	for (int i = 0;i < m;i++)
	{
		x += days[i];
	}

	x += d;

	return x;
}

int main()
{
	/* 2021/11/14 Sunday*/
	/* 1/31 2:29/28 3/31 4/30 5/31 6/30 7/31 8/31 9/30 10/31 11/30 12/31*/
	const char *weekdays[]={ "Sunday" ,"Saturday", "Friday", "Thursday", "Wednesday", "Tuesday", "Monday"};
	int y, m, d, w, n0, n1;
	scanf("%d %d %d", &y, &m, &d);
	n1 = tianshu(y, m, d);
	n0 = tianshu(2021, 11, 14);

	w = (n0 - n1) % 7;

	printf("%s", weekdays[w]);
	
	return 0;
}