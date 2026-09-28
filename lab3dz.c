#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
int main() {
	double a;
	double b;
	setlocale(LC_ALL, ".UTF8");
	printf("a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	printf("|%7s| |%7s| |%7s|\n", "a*b","a+b", "a-b");
	printf("|%3.0lf*%3.0lf| |%3.0lf+%3.0lf| |%3.0lf-%3.0lf|\n", a, b, a, b, a, b);
	printf("|%7.0lf| |%7.0lf| |%7.0lf|\n", a*b, a+b, a - b);
	return 0;
}
