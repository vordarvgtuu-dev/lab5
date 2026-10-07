#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> 
#include <math.h>

int main() {
	SetConsoleOutputCP(65001);
	long double x, y, z, beta;
	printf("Программа расчета функции beta\nВведите значения x, y, z (через пробел):\nПодсказка для проверки: введите 0.01655 -2.75 0.15\n\nВвод:");
	scanf("%Lf %Lf %Lf", &x, &y, &z);

	// 10 * ( cbrt(x) + x^(y+2) )
	long double inside_sqrt = 10.0 * (cbrtl(x) + powl(x, y + 2.0));
	long double part1 = sqrtl(inside_sqrt);
	// arcsin^2(z) - |x - y|
	long double part2 = powl(asinl(z), 2) - fabsl(x - y);
	beta = part1 * part2;
	beta = fabsl(beta);
	printf("\nРЕЗУЛЬТАТ\nПри x = %.5Lf\nПри y = %.2Lf\nПри z = %.2Lf\nВычисленное значение beta = %.6Lf\n", x, y, z, beta);
	return 0;
}