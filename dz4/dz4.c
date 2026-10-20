#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main(void) {
    int a, b;
    int c;
    setlocale(LC_ALL, "RUS");
    printf("Введите код сканера A: ");
    scanf("%d", &a);
    printf("Введите код сканера B: ");
    scanf("%d", &b);
    c = (a % 2 == 0) ^ (b % 2 == 0);
    printf("Условие открытия двери выполнено (1 - да, 0 - нет): %d\n", c);
    return 0;
}
