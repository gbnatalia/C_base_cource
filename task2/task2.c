/** Задача 2. НОД
	Составить функцию, которая определяет наибольший общий делитель двух
	натуральных и привести пример ее использования
	https://younglinux.info/algorithm/euclidean
	int nod(int a, int b)
	Данные на входе: Два целых положительных числа
	Данные на выходе: Одно целое число - наибольший общий делитель.

	Пример №1
		Данные на входе: 14 21
		Данные на выходе: 7
 */

#include <stdio.h>
#include <locale.h>

int nod(int a, int b){
    while (a && b) {
        (a > b)? (a %= b): (b %= a);
    }
    return a? a : b;
} 

int main() {
    int num1, num2;

    setlocale(LC_ALL, "Rus");

    printf("Введите 2 натуральных числа: ");
    scanf("%d%d", &num1, &num2);

    printf("НОД = %d\n",  nod(num1, num2));

    return 0;
}
