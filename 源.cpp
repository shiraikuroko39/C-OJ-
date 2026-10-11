#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a, b;
	scanf("%c", &a);
	if (a <= 57 && a >= 48) {
		b = '9' - a + '0';
	}
	else if (a == 32) {
		b = '*';
	}
	else if (a >= 65 && a <= 90) {
		if (a >= 67)	b = a - 2;
		else {
			if (a == 65)	b = 89;
			else {
				b = 90;
			}
		}
	}

	else if (a >= 97 && a <= 122) {
		if (a != 120 && a != 121 && a != 122)	b = a + 3;
		else {
			if (a == 120)	b = 97;
			else if (a == 121)	b = 98;
			else { b = 99; }
		}
	}
	else { b = '#'; }
	printf("%c %c", a, b);

	return 0;
}