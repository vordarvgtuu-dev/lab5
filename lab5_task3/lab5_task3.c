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

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int usl_a = (A % 2 == 0) ^ (B % 2 == 0); //  только одно из чисел А и В четное
    int usl_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0); //каждое из чисел А,В,С кратно трем

    // Вывод для пункта а)
    printf("\n3 ЗАДАНИЕ:\nа) Только одно из чисел A(a) и B(b) четное:\nУсловие выполнено (1 - да, 0 - нет): %d\nОстаток от деления A на 2 равен: %d, остаток B на 2 равен: %d\n\n", usl_a, A % 2, B % 2);

    // Вывод для пункта б)
    printf("б) Каждое из чисел A(a), B(b), C(y) кратно трем:\nУсловие выполнено (1 - да, 0 - нет): %d\nПодтверждение остатков от деления на 3: A = %d, для B = %d, для C = %d\n", usl_b, A % 3, B % 3, C % 3);
    return 0;
}