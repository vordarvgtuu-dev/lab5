#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#define M_PI            3.14159265358979323846
#include <stdio.h>
#include <windows.h> 
#include <math.h> 

int main() {
    SetConsoleOutputCP(65001);
    long double gr, gr1, gr2, gr3;
    long double rad, rad_g1, rad_g2, rad_g3;
    long double result, result1, result2, result3;

    gr1 = 30.0;
    gr2 = 60.0;
    gr3 = 90.0;

    printf("Программа вычисления тригонометрической функции sin заданного в градусах угла.\nВведите значение: ");
    scanf("%Lf", &gr);

    // ПРОВЕРКА
    rad = gr * M_PI / 180.0;
    result = sinl(rad);
    printf("Результат sin(%.6Lf) равен: %.6Lf\n\n", gr, result);

    rad_g1 = gr1 * M_PI / 180.0;
    result1 = sinl(rad_g1);

    rad_g2 = gr2 * M_PI / 180.0;
    result2 = sinl(rad_g2);

    rad_g3 = gr3 * M_PI / 180.0;
    result3 = sinl(rad_g3);

    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr1, result1);
    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr2, result2);
    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr3, result3);
    return 0;
}
