#define _CRT_SECURE_NO_DEPRECATE
#include <math.h>
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	double x1, y1;
	printf("Координаты точки А ");
	scanf("%lf %lf", &x1, &y1);
	double x2, y2;
	printf("Координаты точки В ");
	scanf("%lf %lf", &x2, &y2);
	printf("Координаты вектора АВ %.0lf %.0lf \n", x2 - x1, y2-y1 );
	double AB = (x2 - x1) *(x2 - x1) + (y2 - y1) * (y2 - y1);
	double otvet = sqrtl(AB);
	printf("Длина вектора АВ=%.2lf",otvet);
	return 0;
}