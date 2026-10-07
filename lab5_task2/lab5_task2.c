#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <windows.h> 
#include <math.h> 

int main() {
    SetConsoleOutputCP(65001);
    const long double k = 8.2;
    long double x, a, b, y;
    printf("Программа расчета математической функции \ny = ln^3(a) + e^(-x)\nb = корень из модуля x\na = b^4 + k^3\nВведите значение параметра x: ");
    scanf("%Lf", &x);

    b = sqrtl(fabsl(x));               // b = корень из модуля x
    a = powl(b, 4) + powl(k, 3);       // a = b^4 + k^3
    y = powl(logl(a), 3) + expl(-x);   // y = ln^3(a) + e^(-x)
    printf("\nРЕЗУЛЬТАТ:\nx = %.2Lf\nb = %.2Lf\na = %.2Lf\ny = %.2Lf\n", x, b, a, y);
    return 0;
}